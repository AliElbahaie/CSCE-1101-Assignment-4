#ifndef Employee_hpp
#define Employee_hpp

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    
private:
    string name;
    int age;
    double salary;
    int experience;
    
public:
    Employee()=default;
    Employee(string,int,double,int);
   
    void setAge(int);
    string getName();
    int getAge();
    double getSalary();
    int getExperience();
    
};

#endif /* Employee_hpp */
