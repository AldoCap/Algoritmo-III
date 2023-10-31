#ifndef TELEPHONEREPRESENTATIVE
#define TELEPHONEREPRESENTATIVE
#include <string>
#include <iostream>

using namespace std;

class TelephoneRepresentative 
{
    public:
        TelephoneRepresentative(string, string, string); 
        string representativeId(); 
        string getName(); 
        string getSurName();
        ~TelephoneRepresentative(); 
        
    private: 
       string representativeName, surname, id; 

};

#endif