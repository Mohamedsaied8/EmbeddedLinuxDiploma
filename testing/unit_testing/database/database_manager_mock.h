// MockDatabaseManager.h
#ifndef MOCKDATABASEMANAGER_H
#define MOCKDATABASEMANAGER_H

#include "gmock/gmock.h"
#include "DatabaseManager.h"

class MockDatabaseManager : public DatabaseManager {
public:
    MOCK_METHOD(bool, Connect, (const std::string& connectionString), (override));
    MOCK_METHOD(bool, Disconnect, (), (override));
    MOCK_METHOD(int, ExecuteQuery, (const std::string& query), (const, override));
    MOCK_METHOD(std::vector<std::string>, GetTableNames, (), (const, override));
};

#endif // MOCKDATABASEMANAGER_H
 