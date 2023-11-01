#ifndef TELEPHONEREPRESENTATIVE
#define TELEPHONEREPRESENTATIVE
#include <string>
#include <iostream>

using namespace std;

class TelephoneRepresentative 
{
    public:
        TelephoneRepresentative(string, string, string); 
        string getID(); 
        string getName(); 
        string getSurname();
        void setName(string); 
        void setSurname(string);
        ~TelephoneRepresentative(); 
        
    private: 
       string name, surname, id; 

};

#endif