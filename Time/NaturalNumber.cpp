#include "NaturalNumber.h"


NaturalNumber::NaturalNumber()
{
}


NaturalNumber::~NaturalNumber()
{
}

void NaturalNumber::setValue(int x)//�����ݳ�Աn��ֵ��Ҫ���ж��Ƿ���������  
{
	n = x;
}

int NaturalNumber::getValue() //����˽�����ݳ�Աn��ֵ  
{
	return n;
}

bool NaturalNumber::isPrime()//�ж����ݳ�Աn�Ƿ�Ϊ�������Ƿ���true�����򷵻�false  
{
	bool prime = true;
	for (int i = 2; i <= sqrt(double(n)); i++)
	{
		if (n%i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

void NaturalNumber::printFactor()  //������ݳ�Աn���������ӣ�������n����  
{
	for (int i = 1; i <= n; i++)
		if (n%i == 0) cout << i << ' ';
	cout << endl;
}

bool NaturalNumber::isPerfect() //�ж����ݳ�Աn�Ƿ�Ϊ��ȫ������һ��������n������С��n������֮�͵���n, ���nΪ��ȫ��, ��=1+2+3����ȫ����  
{
	bool perfect = false;
	int s = 1;
	for (int i = 2; i<n; i++)
		if (n%i == 0) s = s + i;
	if (n == s) perfect = true;
	return perfect;
}

bool NaturalNumber::isReverse(int x)//�ж���ʽ����x�Ƿ�Ϊ���ݳ�Աn�������������ǵ�����������  
{
	bool reverse = false;
	int s = 0;
	while (x>0)
	{
		s = s * 10 + x % 10;
		x = x / 10;
	}
	if (n == s) reverse = true;
	return reverse;
}

bool NaturalNumber::isDaffodil(int x) //�ж���ʽ����x�Ƿ���ˮ�ɻ�����ˮ�ɻ����ĸ�λ���������͵��ڸ�������=1*1*1+5*5*5+3*3*3  
{
	bool daffodil = false;
	int s = 0, p = x;
	int m;
	while (p>0)
	{
		m = p % 10;
		s = s + m*m*m;
		p = p / 10;
	}
	if (x == s) daffodil = true;
	return daffodil;
}

void NaturalNumber::printDaffodils() //��ʾ���д��ڣ���С�����ݳ�Աn��ˮ�ɻ�����  
{
	for (int i = 2; i<n; ++i)
		if (isDaffodil(i)) cout << i << " ";
	cout << endl;
	return;
}