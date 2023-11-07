#ifndef CLIENT
#define CLIENT
#include <string>
#include <iostream>

using namespace std;

class Client 
{
    public:
        Client(string id,string name, string surname, string email,string address); 
        string getName(); 
        string getSurname(); 
        string getID();
        string getEmail();
        string getAddress();
        void setName(string); 
        void setSurname(string); 
        void setEmail(string);
        void setAddress(string);

        
        ~Client(); 
        
    private: 
        string  name,surname, ID, email,address; 

};

#endif