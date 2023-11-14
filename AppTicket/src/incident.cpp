#include "../include/incident.hpp"


Incident::Incident(string ID,string representativeId,string category, string clientID,string description)
{
    this->ID = ID;
    this->representativeId = representativeId;
    this->clientID = clientID;
    this->setCategory(category);
    this->setDescription(description);
}
 
string Incident::getName()
{
    return this->nameClient; 
}
string Incident::getID()
{
    return this->ID; 
}

void  Incident::setName(string nameClient)
{

}

void Incident::setDescription(string description)
{
    this->description = description;
}

string Incident::getDescription()
{
    return this->description; 
}  

string Incident::getCategory()
{
    return this->category; 
} 
        
void Incident::setCategory(string category)
{
    this->category = category;
} 

Incident::~Incident()
{

}