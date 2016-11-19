#include "Salary.h"


Salary::Salary()
{
}


Salary::~Salary()
{
	delete[]salary;
	//system("pause");
}

void Salary::input_salary()
{
	int i;
	cout << "职员的人数是：";
	cin >> number;
	salary = new double[number];  //这是最为关键的一句，根据职工人数，确定分配空间的大小  
	cout << "请输入职工工资:" << endl;
	for (i = 0; i < number; ++i)
	{
		cin >> *(salary + i);
	}
	return;
}

void Salary::add_salary()
{
	for (int i = 0; i < number; ++i)
	{
		*(salary + i) = *(salary + i) + 100;
	}
}

void Salary::order_salary()//排序    
{
	int i, j;
	double t;
	for (i = 0; i < number; ++i)
	{
		for (j = 0; j < number - i - 1; ++j)
		{
			if (*(salary + j) < *(salary + j + 1))
			{
				t = *(salary + j);
				*(salary + j) = *(salary + j + 1);
				*(salary + j + 1) = t;
			}
		}
	}
	return;
}

void Salary::show_salary()
{
	for (int i = 0; i < number; ++i)
	{
		cout << *(salary + i) << endl;
	}
	return;
}