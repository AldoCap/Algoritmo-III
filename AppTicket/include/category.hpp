#ifndef CATEGORY
#define CATEGORY
#include <string>
#include <iostream>

using namespace std;

class Category 
{
    public:
        Category(); 
        string represntativeId(); 
        string getDescription(); 
        void setName(string); 
        void setDescription(string); 
        ~Category(); 
        
    private: 
        string name, description;

};

#endif