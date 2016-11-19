#pragma once
#include <iostream> 
class Time
{
public:
	Time();
	~Time();
	void set_time();
	void show_time();
	void add_a_sec();  //增加1秒钟  
	void add_a_minute(); //增加1分钟  
	void add_an_hour(); //增加1小时  
	void add_seconds(int); //增加n秒钟  
	void add_minutes(int); //增加n分钟  
	void add_hours(int); //增加n小时  
private:
	bool is_time(int, int, int);
	int hour;
	int minute;
	int sec;
};

