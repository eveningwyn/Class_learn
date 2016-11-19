#pragma once
#include<iostream>  
#include<Cmath>  
using namespace std;

class NaturalNumber
{
public:
	NaturalNumber();
	~NaturalNumber();

	void setValue(int x);//置数据成员n的值，要求判断是否是正整数  
	int getValue();  //返回私有数据成员n的值  
	bool isPrime();  //判断数据成员n是否为素数，是返回true，否则返回false  
	void printFactor();  //输出数据成员n的所有因子，包括和n自身  
	bool isPerfect(); //判断数据成员n是否为完全数。若一个正整数n的所有小于n的因子之和等于n, 则称n为完全数, 如=1+2+3是完全数。  
	bool isReverse(int x);//判断形式参数x是否为数据成员n的逆向数（例是的逆向数）。  
	bool isDaffodil(int x); //判断形式参数x是否是水仙花数。水仙花数的各位数字立方和等于该数，如=1*1*1+5*5*5+3*3*3  
	void printDaffodils(); //显示所有大于，且小于数据成员n的水仙花数；

private:
	int n;
};

