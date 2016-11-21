#pragma once
#include <math.h>
class Rectangle		//����һ��������
{
public:
	Rectangle(float x = 1, float y = 1);	//���γ����ʼ��
	~Rectangle();
	float get_length(){ return length; };	//��ó���
	float get_width(){ return width; };		//��ÿ��
	float area();	//������
	float perimeter();		//����ܳ�
	float diagonal();		//��öԽ��߳�
	bool is_square();		//��������Ϊtrue������������Ϊfalse

private:
	float length;		//����
	float width;		//���
};

