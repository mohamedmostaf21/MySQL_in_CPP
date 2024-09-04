# MySQL_in_CPP
\
# Add MySQL APT Repository:
sudo apt install wget \
sudo apt update
\
# Install MySQL Connector/C++:
sudo apt install libmysqlcppconn-dev
\
# Download the Source Code: 
 wget https://dev.mysql.com/get/Downloads/Connector-C++/mysql-connector-c++-9.0.0-linux-glibc2.28-x86-64bit.tar.gz
\
# Extract the Tarball:
tar -xvzf mysql-connector-c++-9.0.0-linux-glibc2.28-x86-64bit.tar.gz \
cd mysql-connector-c++-9.0.0-linux-glibc2.28-x86-64
\
# Build and Install:
sudo cp -r include/* /usr/local/include/  \
sudo cp -r lib/* /usr/local/lib/  \
sudo cp -r lib64/* /usr/local/lib/ 

