#ifndef INCIDENT    
#define INCIDENT    
#include <string>
#include <iostream>
using namespace std;

class Incident 
{
    public:
        Incident(string ID,string representativeId, 
                        string category, string clientID,string description);  
        string getName(); 
        void  setName(string nameClient); 
        void setDescription(string description);
        string getDescription();  
        string getCategory(); 
        string getID(); 
        void setCategory(string category); 
        ~Incident(); 
        
    private: 
        string ID, representativeId, nameClient, 
            category,clientID, description; 

};

#endif