#include "../include/telephoneRepresentativeHandler.hpp"

using namespace std;

TelephoneRepresentativeHandler::TelephoneRepresentativeHandler()
{
    representativeStorage = new string [maxLength];
}

string TelephoneRepresentativeHandler::create(Client *clientData)
{
    return this->data; 
} 
string TelephoneRepresentativeHandler::update(string, string)
{
    return this->uuid; 
}

string TelephoneRepresentativeHandler::view(string)
{
    return this->uuid; 
}
        
string TelephoneRepresentativeHandler::del(string)
{
    return this->data; 
}

TelephoneRepresentativeHandler::~TelephoneRepresentativeHandler()
{

} 