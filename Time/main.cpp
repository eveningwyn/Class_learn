#include "Time.h"
#include "NaturalNumber.h"
#include "Salary.h"
#include "Rectangle.h"
#include "Bulk.h"


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
	/*
	Salary sal1;
	sal1.input_salary();
	sal1.add_salary();
	sal1.order_salary();
	cout << "���ӹ����������Ĺ����ǣ�" << endl;
	sal1.show_salary();
	*/
	/*
	Rectangle rec;
	cout << "��һ�����Σ������ǣ�" << rec.get_length() << "������ǣ�" << rec.get_width() << endl;
	if (bool (rec.is_square()))
	{
		cout << "ͬʱ��Ҳ��һ��������" << endl;
	}
	else
	{
		cout << "����������һ��������" << endl;
	}
	cout << "������ε�����ǣ� " << rec.area() << endl;
	cout << "������ε��ܳ��ǣ� " << rec.perimeter() << endl;
	cout << "������εĶԽ��߳��ǣ� " << rec.diagonal() << endl;
	*/
	/*
	Bulk b[5] = { Bulk(2.3, 4.5, 6.7), Bulk(1.5, 3.4, 9.5), Bulk(10.5, 22.3, 3.14) };//ǰ����Ԫ���ô��ι��캯����ʼ������������Ĭ�Ϲ��캯��  
	b[4].set_value();  //ע��b[4]��һ�����󣬵��ó�Ա��������ʽb[4].set_value()  
	for (int i = 0; i<5; ++i)
	{
		cout << "����b[" << i << "]" << endl;
		b[i].display();//���ö���������Ԫ�صĳ�Ա����  
	}*/

	

	system("pause");
	return 0;
}