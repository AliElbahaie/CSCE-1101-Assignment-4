#ifndef hashlists_hpp
#define hashlists_hpp
#include <iostream>
#include <string>
#include <list>
#include "Employee.hpp"
using namespace std;


class Node
{
public:
    int key;
    Employee value;
    Node* next;
};


class hashtable
{
private:
    Node* table[10];
    int hash(int key);

public:
    int collisions=0;
    hashtable();
    void insert(Employee);
    void remove(Employee);
    void print();
    int getCollisions();
};


#endif /* hashlists_hpp */
