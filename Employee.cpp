#include "Employee.hpp"
Employee::Employee(string Name,int Age,double Salary,int Experience)
{
    name=Name;
    age=Age;
    salary=Salary;
    experience=Experience;
}
void Employee::setAge(int Age)
{
    age=Age;
}
string Employee::getName()
{
    return name;
    
}
int Employee::getAge()
{
    return age;
}
double Employee::getSalary()
{
    return salary;
}
int Employee::getExperience()
{
    return experience;
}

