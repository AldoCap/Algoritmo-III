#include "../include/category.hpp"

Category::Category(string name, string description)
{
    this->name = name; 
    this->description = description; 
}

Category::~Category()
{
}

string Category::getDescription()
{
    return this->description; 
}

string Category::represntativeId()
{
    return this->name; 
}

void Category::setName(string)
{

}
void Category::setDescription(string)
{
    
}
