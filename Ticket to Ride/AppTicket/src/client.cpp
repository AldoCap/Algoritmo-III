#include "../include/client.hpp"


Client::Client(string name, string surname, string id, string email)
{
    this->name = name; 
    this->surname = surname; 
    this->id = id; 
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

string Client::getId()
{
    return this->id; 
}

string Client::getEmail()
{
    return this->email; 
}
        
Client::~Client(){} 
