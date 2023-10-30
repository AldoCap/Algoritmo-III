#include "../include/uuid.hpp"

Uuid::Uuid(string name, string description)
{
    this->name = name; 
    this->description = description; 
    
}
void Uuid::setUuid()
{

} 

string Uuid::getUuid()
{
    return this->name; 
}

Uuid::~Uuid(){} 

