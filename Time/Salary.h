#pragma once
#include<iostream> 

using namespace std;
class Salary
{
public:
	Salary();
	~Salary();

	void input_salary();
	void add_salary();
	void order_salary();
	void show_salary();
private:
	double *salary;
	int number;
};

