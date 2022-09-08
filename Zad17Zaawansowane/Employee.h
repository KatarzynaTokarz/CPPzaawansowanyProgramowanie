#pragma once
#include <string>

class Employee
{
public:
	enum class Gender
	{
		MALE,
		FEMALE,
		UNKNOWN
	};


	Employee(std::string firstName, std::string lastName, std::string email, Gender gender, double salary)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->email = email;
		this->gender = gender;
		this->salary = salary;
	};

	std::string getName();
	std::string getlastName();
	std::string getEmail();
	Gender getGender();
	double getSalary();


private:

	std::string firstName;
	std::string lastName;
	std::string email;
	Gender gender;
	double salary;
	//......
};