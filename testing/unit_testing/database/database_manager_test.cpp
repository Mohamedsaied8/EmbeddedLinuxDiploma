// DatabaseManagerTest.cpp
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "DatabaseManager.h"
#include "MockDatabaseManager.h"

using testing::_;
using testing::Return;
using testing::ElementsAre;

class DatabaseClient {
public:
    DatabaseClient(DatabaseManager* manager) : manager_(manager) {}

    bool Init(const std::string& connectionString) {
        return manager_->Connect(connectionString);
    }

    bool Cleanup() {
        return manager_->Disconnect();
    }

    int PerformQuery(const std::string& query) const {
        return manager_->ExecuteQuery(query);
    }

    std::vector<std::string> GetTableList() const {
        return manager_->GetTableNames();
    }

private:
    DatabaseManager* manager_;
};

TEST(DatabaseClientTest, DatabaseOperations) {
    MockDatabaseManager mockManager;
    DatabaseClient client(&mockManager);

    const std::string connectionStr = "fake_connection_string";
    const std::string query = "SELECT * FROM table";

    // Set expectations
    EXPECT_CALL(mockManager, Connect(connectionStr))
        .WillOnce(Return(true));

    EXPECT_CALL(mockManager, ExecuteQuery(query))
        .WillOnce(Return(42));

    EXPECT_CALL(mockManager, GetTableNames())
        .WillOnce(Return(std::vector<std::string>{"table1", "table2"}));

    EXPECT_CALL(mockManager, Disconnect())
        .WillOnce(Return(true));

    // Test the DatabaseClient
    ASSERT_TRUE(client.Init(connectionStr));
    ASSERT_EQ(42, client.PerformQuery(query));
    ASSERT_THAT(client.GetTableList(), ElementsAre("table1", "table2"));
    ASSERT_TRUE(client.Cleanup());
}
