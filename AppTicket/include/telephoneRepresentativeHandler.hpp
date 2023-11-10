#ifndef TELEPHONEREPRESENTATIVEHANDLER
#define TELEPHONEREPRESENTATIVEHANDLER
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <telephoneRepresentative.hpp>
#include <uuid.hpp>

using namespace std;

class TelephoneRepresentativeHandler 
{
    public:
        TelephoneRepresentativeHandler(); 
        string create(map<string, string> telRepreData); 
        void update(map<string, string> telRepreData,string telRepreID); 
        void readData(string);
        string deletetelRepre(string);
        ~TelephoneRepresentativeHandler(); 
        
    private: 
        int maxLength = 100;  
        // UuId* uuid;
        string data; 
        vector<TelephoneRepresentative*> telRepreStorage;  

};

#endif