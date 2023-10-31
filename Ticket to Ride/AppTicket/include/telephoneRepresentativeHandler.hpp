#ifndef TELEPHONEREPRESENTATIVEHANDLER
#define TELEPHONEREPRESENTATIVEHANDLER
#include <string>
#include <iostream>
#include "telephoneRepresentative.hpp"
#include "client.hpp"

using namespace std;

class TelephoneRepresentativeHandler 
{
    public:
        TelephoneRepresentativeHandler(); 
        string create(Client *clientData); 
        string update(string, string); 
        string view(string);
        string del(string);
        ~TelephoneRepresentativeHandler(); 
        
    private: 
        int maxLength = 100;  
        string uuid, data; 
        Client *clientData; 
        string *representativeStorage = new string [maxLength];  

};

#endif