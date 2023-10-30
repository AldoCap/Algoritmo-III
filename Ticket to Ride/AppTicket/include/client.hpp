#ifndef CLIENT
#define CLIENT
#include <string>
#include <iostream>

using namespace std;

class Client 
{
    public:
        Client(string name, string surname, string id, string email); 
        string getName(); 
        string getSurname(); 
        string getId();
        string getEmail();
        
        ~Client(); 
        
    private: 
        string  name = "",surname = "", id = "", email = ""; 

};

#endif