#include "Time.h"
#include "NaturalNumber.h"
#include "Salary.h"

using namespace std;

int main()
{
	/*
	Time t1;
	Time &t2 = t1;
	t1.set_time();
	cout << "����ʱ���ǣ�";
	t2.show_time();

	t1.add_a_sec();  //����1����  
	cout << "����1���Ӻ�";
	t1.show_time();

	t1.add_a_minute(); //����1����  
	cout << "����1���Ӻ�";
	t1.show_time();

	t1.add_an_hour(); //����1Сʱ  
	cout << "����1Сʱ��";
	t1.show_time();

	t1.add_seconds(40); //����40����  
	cout << "����40���Ӻ�";
	t1.show_time();

	t1.add_minutes(127); //����127����  
	cout << "����127���Ӻ�";
	t1.show_time();

	t1.add_hours(8); //����8Сʱ  
	cout << "����8Сʱ��";
	t1.show_time();
	*/
	/*
	NaturalNumber nn;   //�������һ��ʵ��������  
	nn.setValue(6);
	cout << nn.getValue() << (nn.isPrime() ? "��" : "����") << "����" << endl;

	nn.setValue(37);
	cout << nn.getValue() << (nn.isPrime() ? "��" : "����") << "����" << endl;

	nn.setValue(84);
	cout << nn.getValue() << "�������У�";
	nn.printFactor();

	nn.setValue(29);
	cout << nn.getValue() << "�������У�";
	nn.printFactor();

	nn.setValue(6);
	cout << nn.getValue() << (nn.isPerfect() ? "��" : "����") << "��ȫ��" << endl;

	nn.setValue(37);
	cout << nn.getValue() << (nn.isPerfect() ? "��" : "����") << "��ȫ��" << endl;

	nn.setValue(1237);
	int x = 732;
	cout << nn.getValue() << " ��" << x << " " << (nn.isReverse(x) ? "��" : "����") << "������" << endl;

	cout << "���д��ڣ���С�����ݳ�Ա" << nn.getValue() << " ��ˮ�ɻ����У�";
	nn.printDaffodils();
	*/

	Salary sal1;
	sal1.input_salary();
	sal1.add_salary();
	sal1.order_salary();
	cout << "���ӹ����������Ĺ����ǣ�" << endl;
	sal1.show_salary();

	system("pause");
	return 0;
}