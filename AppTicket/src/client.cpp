#include <client.hpp>

Client::Client(string id,string name, string surname, string email)
{
    this->ID = id; 
    this->name = name; 
    this->surname = surname; 
    this->email = email; 
}
string Client::getName()
{
    return this->name; 
}

string Client::getSurname()
{
    return this->surname; 
} 

string Client::getID()
{
    return this->ID; 
}

string Client::getEmail()
{
    return this->email; 
}
void Client::setName(string name)
{
    this->name = name;
}; 
void Client::setSurname(string surname)
{
    this->surname = surname;
}; 
void Client::setEmail(string email)
{
    this->email = email;
};       
Client::~Client(){} 

void Client::setAddress(string address)
{
    this->address = address;
};

string Client::getAddress()
{
    return this->address;
};
