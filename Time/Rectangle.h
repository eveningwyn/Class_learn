#pragma once
#include <math.h>
class Rectangle		//声明一个矩形类
{
public:
	Rectangle(float x = 1, float y = 1);	//矩形长宽初始化
	~Rectangle();
	float get_length(){ return length; };	//获得长度
	float get_width(){ return width; };		//获得宽度
	float area();	//获得面积
	float perimeter();		//获得周长
	float diagonal();		//获得对角线长
	bool is_square();		//是正方形为true，不是正方形为false

private:
	float length;		//长度
	float width;		//宽度
};

