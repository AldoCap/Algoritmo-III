#ifndef UUID
#define UUID
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

class Uuid 
{
    public:

        Uuid(string name, string description); 
        void setUuid(); 
        string getUuid();  
        ~Uuid(); 
        
    private: 
        string name = "", description = "";  
}; 

#endif