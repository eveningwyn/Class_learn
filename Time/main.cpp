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

	Salary sal1;
	sal1.input_salary();
	sal1.add_salary();
	sal1.order_salary();
	cout << "增加工资且排序后的工资是：" << endl;
	sal1.show_salary();

	system("pause");
	return 0;
}