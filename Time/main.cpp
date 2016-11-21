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
	cout << "现在时间是：";
	t2.show_time();

	t1.add_a_sec();  //增加1秒钟  
	cout << "增加1秒钟后：";
	t1.show_time();

	t1.add_a_minute(); //增加1分钟  
	cout << "增加1分钟后：";
	t1.show_time();

	t1.add_an_hour(); //增加1小时  
	cout << "增加1小时后：";
	t1.show_time();

	t1.add_seconds(40); //增加40秒钟  
	cout << "增加40秒钟后：";
	t1.show_time();

	t1.add_minutes(127); //增加127分钟  
	cout << "增加127分钟后：";
	t1.show_time();

	t1.add_hours(8); //增加8小时  
	cout << "增加8小时后：";
	t1.show_time();
	*/
	/*
	NaturalNumber nn;   //定义类的一个实例（对象）  
	nn.setValue(6);
	cout << nn.getValue() << (nn.isPrime() ? "是" : "不是") << "素数" << endl;

	nn.setValue(37);
	cout << nn.getValue() << (nn.isPrime() ? "是" : "不是") << "素数" << endl;

	nn.setValue(84);
	cout << nn.getValue() << "的因子有：";
	nn.printFactor();

	nn.setValue(29);
	cout << nn.getValue() << "的因子有：";
	nn.printFactor();

	nn.setValue(6);
	cout << nn.getValue() << (nn.isPerfect() ? "是" : "不是") << "完全数" << endl;

	nn.setValue(37);
	cout << nn.getValue() << (nn.isPerfect() ? "是" : "不是") << "完全数" << endl;

	nn.setValue(1237);
	int x = 732;
	cout << nn.getValue() << " 和" << x << " " << (nn.isReverse(x) ? "是" : "不是") << "逆向数" << endl;

	cout << "所有大于，且小于数据成员" << nn.getValue() << " 的水仙花数有：";
	nn.printDaffodils();
	*/
	/*
	Salary sal1;
	sal1.input_salary();
	sal1.add_salary();
	sal1.order_salary();
	cout << "增加工资且排序后的工资是：" << endl;
	sal1.show_salary();
	*/
	/*
	Rectangle rec;
	cout << "有一个矩形，长度是：" << rec.get_length() << "，宽度是：" << rec.get_width() << endl;
	if (bool (rec.is_square()))
	{
		cout << "同时它也是一个正方形" << endl;
	}
	else
	{
		cout << "并且它不是一个正方形" << endl;
	}
	cout << "这个矩形的面积是： " << rec.area() << endl;
	cout << "这个矩形的周长是： " << rec.perimeter() << endl;
	cout << "这个矩形的对角线长是： " << rec.diagonal() << endl;
	*/
	/*
	Bulk b[5] = { Bulk(2.3, 4.5, 6.7), Bulk(1.5, 3.4, 9.5), Bulk(10.5, 22.3, 3.14) };//前三个元素用带参构造函数初始化，后两个用默认构造函数  
	b[4].set_value();  //注意b[4]是一个对象，调用成员函数的形式b[4].set_value()  
	for (int i = 0; i<5; ++i)
	{
		cout << "关于b[" << i << "]" << endl;
		b[i].display();//调用对象数组中元素的成员函数  
	}*/

	

	system("pause");
	return 0;
}