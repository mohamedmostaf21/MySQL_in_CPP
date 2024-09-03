#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <iostream>
#include "include/user.h"
int main() {

    try {
        // Initialize the MySQL driver
        sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
        if (!driver) {
            std::cerr << "Failed to get MySQL driver instance" << std::endl;
            return 1;
        }

        // Establish a connection to the database
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "sqluser", "password"));

        if (!con) {
            std::cerr << "Failed to connect to the database" << std::endl;
            return 1;
        }

        std::cout << "Successfully connected to MySQL database!" << std::endl;
        // Create a statement object
        std::unique_ptr<sql::Statement> stmt(con->createStatement());

        // Execute a query to retrieve data
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM myrestaurant.clients"));
       
        // Process the result set
        while (res->next()) {
            User user( res->getString(1),  res->getString(2),  res->getString(3),  res->getString(4));
            user.printData();
        }
        // Clean up
        con->close();
    } catch (sql::SQLException &e) {
        std::cerr << "SQLException: " << e.what() << std::endl;
        std::cerr << "Error code: " << e.getErrorCode() << std::endl;
        std::cerr << "SQLState: " << e.getSQLState() << std::endl;
        return 1;
    }
    return 0;
}
