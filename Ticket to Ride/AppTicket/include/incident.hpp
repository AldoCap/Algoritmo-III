#ifndef INCIDENT    
#define INCIDENT    
#include <string>
#include <iostream>
#include "ticketHandler.hpp"
using namespace std;

class Incident 
{
    public:
        Incident(string representativeId, 
                        string category, string idClient);  
        string getName(); 
        void  setName(string nameClient); 
        void setDescription(string description);
        string getDescription();  
        string getCategory(); 
        void setCategory(string category); 
        ~Incident(); 
        
    private: 
        string representativeId = "", nameClient = "", 
            category = "" ,idClient = "", description=""; 

};

#endif