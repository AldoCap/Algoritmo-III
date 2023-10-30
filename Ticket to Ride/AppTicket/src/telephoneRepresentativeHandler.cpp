#include "../include/telephoneRepresentativeHandler.hpp"

using namespace std;

TelephoneRepresentativeHandler::TelephoneRepresentativeHandler(string, string, string)
{

}

string TelephoneRepresentativeHandler::create(string, string)
{
    return this->clientData; 
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