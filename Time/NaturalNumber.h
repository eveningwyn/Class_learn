#pragma once
#include<iostream>  
#include<Cmath>  
using namespace std;

class NaturalNumber
{
public:
	NaturalNumber();
	~NaturalNumber();

	void setValue(int x);//�����ݳ�Աn��ֵ��Ҫ���ж��Ƿ���������  
	int getValue();  //����˽�����ݳ�Աn��ֵ  
	bool isPrime();  //�ж����ݳ�Աn�Ƿ�Ϊ�������Ƿ���true�����򷵻�false  
	void printFactor();  //������ݳ�Աn���������ӣ�������n����  
	bool isPerfect(); //�ж����ݳ�Աn�Ƿ�Ϊ��ȫ������һ��������n������С��n������֮�͵���n, ���nΪ��ȫ��, ��=1+2+3����ȫ����  
	bool isReverse(int x);//�ж���ʽ����x�Ƿ�Ϊ���ݳ�Աn�������������ǵ�����������  
	bool isDaffodil(int x); //�ж���ʽ����x�Ƿ���ˮ�ɻ�����ˮ�ɻ����ĸ�λ���������͵��ڸ�������=1*1*1+5*5*5+3*3*3  
	void printDaffodils(); //��ʾ���д��ڣ���С�����ݳ�Աn��ˮ�ɻ�����

private:
	int n;
};

