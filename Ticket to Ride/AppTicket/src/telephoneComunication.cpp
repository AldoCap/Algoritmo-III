#include "../include/telephoneRepresentative.hpp"


TelephoneRepresentative::TelephoneRepresentative(string, string, string)
{

}
string TelephoneRepresentative::representativeId()
{
    return this->id; 
} 

string TelephoneRepresentative::getName()
{
    return this->representativeName;  
} 

string TelephoneRepresentative::getSurName()
{
    return this->surname; 
}

TelephoneRepresentative::~TelephoneRepresentative()
{

} 
