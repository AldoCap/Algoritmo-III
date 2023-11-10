#ifndef UUID
#define UUID
// #include <cstdlib>
// #include <ctime>
// #include <string>
// #include <iostream>

// using namespace std;

// class UuId 
// {
//     public:
//         UuId();
//         string createUuid();
//         ~UuId();

//     private:
//         string uuid;
// };

#include <iostream>
#include <random>
#include <sstream>

class UuId {
public:
    UuId() : gen(generateSeed()) {}
    // std::string createUuid();
    ~UuId() {}

private:
    std::mt19937_64 gen;

    static uint64_t generateSeed() {
        std::random_device rd;
        std::uniform_int_distribution<uint64_t> dis;
        return dis(rd);
    }

public:
    static std::string generateUuid() {
        std::ostringstream stream;
        stream << std::hex << getInstance().gen() << getInstance().gen();
        return stream.str();
    }

    static UuId& getInstance() {
        static UuId instance;
        return instance;
    }
};

#endif