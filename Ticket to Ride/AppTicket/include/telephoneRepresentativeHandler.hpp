#ifndef TELEPHONEREPRESENTATIVEHANDLER
#define TELEPHONEREPRESENTATIVEHANDLER
#include <string>
#include <iostream>
#include "telephoneRepresentative.hpp"

using namespace std;

class TelephoneRepresentativeHandler 
{
    public:
        TelephoneRepresentativeHandler(string, string, string); 
        string create(string, string); 
        string update(string, string); 
        string view(string);
        string del(string);
        ~TelephoneRepresentativeHandler(); 
        
    private: 
       string uuid, data; 
       string clientData; 

};

#endif