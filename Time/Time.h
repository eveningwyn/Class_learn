#pragma once
#include <iostream> 
class Time
{
public:
	Time();
	~Time();
	void set_time();
	void show_time();
	void add_a_sec();  //����1����  
	void add_a_minute(); //����1����  
	void add_an_hour(); //����1Сʱ  
	void add_seconds(int); //����n����  
	void add_minutes(int); //����n����  
	void add_hours(int); //����nСʱ  
private:
	bool is_time(int, int, int);
	int hour;
	int minute;
	int sec;
};

