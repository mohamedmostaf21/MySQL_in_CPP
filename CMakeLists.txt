cmake_minimum_required(VERSION 3.14)


# Define the project name and version
project(MyProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(main main.cpp  src/user.cpp)
# Link the MySQL Connector/C++ library
target_link_libraries(main PRIVATE mysqlcppconn)
target_include_directories(main PUBLIC include)
