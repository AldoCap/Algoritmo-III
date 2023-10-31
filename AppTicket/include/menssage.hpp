#ifndef MENSSAGE
#define MENSSAGE
#include <string>
#include <iostream>
#include "uuid.hpp"
using namespace std;

class Menssage 
{
    public:
        Menssage(); 
        string getDescription(); 
        string getDate(); 
        string getUserTarget(string); 
        string getUserOrigin(); 
        void setUserTarget(Uuid*uuid); 
        void setDescription(string); 
        void setDate(string); 
        void setUserOrigin(Uuid*uuid); 
        ~Menssage(); 
        
    private: 
        string name, description;

};

#endif