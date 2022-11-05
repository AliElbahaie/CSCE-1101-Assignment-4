#include <iostream>
#include <string>
#include "Employee.hpp"
using namespace std;

class hashTableArray
{
private:
    int size;
    Employee *table;
    int collisions;
public:
    hashTableArray(int size);
    void insert(Employee);
    void remove(Employee);
    void print();
    int hashFunction(int key);
    float getCollisions();
};

