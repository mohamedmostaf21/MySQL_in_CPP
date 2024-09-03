#include "../include/user.h"

User::User(std::string ID, std::string firstName, std::string lastName, std::string Email): 
                                                ID(ID), 
                                                firstName(firstName), 
                                                lastName(lastName), 
                                                Email(Email)
{
    
}

void User::printData(){
    std::cout << "ID: " << this->ID << std::endl;
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Email: " << this->Email << std::endl;
}