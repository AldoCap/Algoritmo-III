#ifndef TICKET
#define TICKET
#include <string>
#include <iostream>
#include "ticketHandler.hpp"
using namespace std;

class Ticket 
{
    public:
        Ticket();  
        void setCategory(string); 
        string getDescription(); 
        void closeTicket(string uuid);
        void viewStatusTicket(string uuid);  
        void setDescription(string); 
        ~Ticket(); 
        
    private: 
        string representativeId = "", nameClient = "", 
            surnameClient = "" ,idClient = "", description=""; 

};

#endif