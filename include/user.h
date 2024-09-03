#ifndef USER_H_
#define USER_H_
#include <iostream>

class User{
private:
    std::string ID;
    std::string firstName;    
    std::string lastName;    
    std::string Email;

public:
    User(std::string ID, std::string firstName, std::string lastName, std::string Email);

    void printData();
    
};

#endif /* USER_H_ */