#ifndef UUID
#define UUID
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

class UuId 
{
    public:
        UuId();
        string createUuid();
        ~UuId();

    private:
        string uuid;
};
#endif