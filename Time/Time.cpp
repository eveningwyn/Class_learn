#include "Time.h"
using namespace std;

Time::Time()
{
}


Time::~Time()
{
}

void Time::set_time()  //��κ��������ˡ������Ѻá�������ķ���  
{
	char c1, c2;
	cout << "������ʱ��(��ʽhh:mm:ss)";
	while (1)
	{
		cin >> hour >> c1 >> minute >> c2 >> sec;
		if (c1 != ':' || c2 != ':')
			cout << "��ʽ����ȷ������������" << endl;
		else if (!is_time(hour, minute, sec))
			cout << "ʱ��Ƿ�������������" << endl;
		else
			break;
	}
}

void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}

bool Time::is_time(int h, int m, int s)
{
	if (h<0 || h>24 || m<0 || m>60 || s<0 || s>60)
		return false;
	return true;
}

void Time::add_a_sec()  //����1����  
{
	++sec;              //ֱ���޸�sec��ֵ���ɣ�sec��Time������ݳ�Ա  
	if (sec>59)          //sec�����涨�ķ�Χ����Ϊֻ������1�룬���Ҳ��������ӽ�λ1����������1���ӡ�        
		add_a_minute(); //��������1�����Ƿ������Сʱ�仯����add_a_minute()����  
}

void Time::add_a_minute() //����1����  
{
	++minute;
	if (minute>59)       //�μ�add_a_sec()�е�ע��  
		add_an_hour();
}

void Time::add_an_hour() //����1Сʱ  
{
	++hour;
	if (hour>23)
		hour = 0;     //����2����  
}

void Time::add_seconds(int n) //����n����  
{
	sec += n;         //ֱ�Ӽ���ȥ���˲�������ʹsec����ȡֵ��Χ���������洦������ֻҪ��֤�˺���ִ����sec��ȡֵ��ȷ����  
	if (sec>59)      //˼����if�е���������ܷ񽻻�˳��Ϊʲô���ܣ�������ǡ�����  
	{
		add_minutes(sec / 60);    //����sec/60����  
		sec %= 60;                //����Ӧ����sec%=60  
	}
}

void Time::add_minutes(int n) //����n����  
{
	minute += n;
	if (minute>59)       //�μ�add_seconds()�е�ע��  
	{
		add_hours(minute / 60);
		minute %= 60;
	}
}

void Time::add_hours(int n) //����nСʱ  
{
	hour += n;
	if (hour>23)
		hour %= 24;       //�˳����漰���ڣ���������DateTime���޸Ľ�������ȥ  
}