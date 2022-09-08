#include "Employee.h"

std::string Employee::getName()
{
    return firstName;
}

std::string Employee::getlastName()
{
    return lastName;
}

std::string Employee::getEmail()
{
    return email;
}

Employee::Gender Employee::getGender()
{
    return gender;
}

double Employee::getSalary()
{
    return salary;
}
