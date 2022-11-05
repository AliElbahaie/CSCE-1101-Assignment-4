//implement functions in array.h

#include <iostream>
#include <string>
#include "hashtablearray.hpp"

using namespace std;

hashTableArray::hashTableArray(int size)
{
    this->size = size;
    table = new Employee[size];
    for (int i = 0; i < size; i++)
    {
        table[i].setAge(-1);
    }
    collisions = 0;
}

void hashTableArray::insert(Employee e)
{
    int index = hashFunction(e.getAge());
    if (table[index].getAge() == -1)
    {
        table[index] = e;
    }
    else
    {
        collisions++;
        for (int i = index + 1; i < size; i++)
        {
            if (table[i].getAge() == -1)
            {
                table[i] = e;
                break;
            }
        }
    }
}

void hashTableArray::remove(Employee e)
{
    int index = hashFunction(e.getAge());
    if (table[index].getAge() == e.getAge())
    {
        table[index].setAge(-1);
    }
    else
    {
        for (int i = index + 1; i < size; i++)
        {
            if (table[i].getAge() == e.getAge())
            {
                table[i].setAge(-1);
                break;
            }
        }
    }
}

void hashTableArray::print()
{
    cout<<"Hash Table Using Dynamic Array"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << table[i].getName() <<
        endl << "Age: "   << table[i].getAge()   <<
        endl <<"Salary: "<<table[i].getSalary()<<
        endl<<"Years of Experience: "<<table[i].getExperience()<<endl;
        cout<<"=============================="<<endl;
        
    }
    cout<<"Collision rate is: "<<this->getCollisions()<<"%"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout << endl;
}

int hashTableArray::hashFunction(int key)
{
    return key % size;
}

float hashTableArray::getCollisions()
{
    return (collisions/size)*100;
}

