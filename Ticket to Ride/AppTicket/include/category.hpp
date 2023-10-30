#ifndef CATEGORY
#define CATEGORY
#include <string>
#include <iostream>

using namespace std;

class Category 
{
    public:
        Category(string name, string description); 
        string represntativeId(); 
        string getDescription(); 
        void setName(string); 
        void setDescription(string); 
        ~Category(); 
        
    private: 
        string name;
        string description;

};

#endif