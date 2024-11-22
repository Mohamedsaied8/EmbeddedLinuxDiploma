// DatabaseManager.h
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <string>
#include <vector>

class DatabaseManager {
public:
    virtual ~DatabaseManager() {}

    virtual bool Connect(const std::string& connectionString) = 0;
    virtual bool Disconnect() = 0;
    virtual int ExecuteQuery(const std::string& query) const = 0;
    virtual std::vector<std::string> GetTableNames() const = 0;
};

#endif // DATABASEMANAGER_H
