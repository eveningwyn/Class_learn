#pragma once
#include <iostream> 
class Bulk
{
public:
	Bulk():lengh(1.0), width(1.0), height(1.0){};//Ĭ�Ϲ��캯��  
	Bulk(double x, double y, double z) :lengh(x), width(y), height(z){};//�������Ĺ��캯��  
	~Bulk();
	void set_value();
	void display();
private:
	double lengh;
	double width;
	double height;
};

