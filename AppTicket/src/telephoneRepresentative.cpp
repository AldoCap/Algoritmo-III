#include <telephoneRepresentative.hpp>


TelephoneRepresentative::TelephoneRepresentative(string ID, string name, string surname)
{
    this->id = ID;
    this->name = name;
    this->surname = surname;
}
string TelephoneRepresentative::getID()
{
    return this->id; 
} 

string TelephoneRepresentative::getName()
{
    return this->name;  
} 

void TelephoneRepresentative::setSurname(string surname)
{
    this->surname = surname;
}
string TelephoneRepresentative::getSurname()
{
    return this->surname;
}

TelephoneRepresentative::~TelephoneRepresentative()
{

} 
void TelephoneRepresentative::setName(string name)
{
    this->name = name;
} 
