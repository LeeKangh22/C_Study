#include<iostream>

using namespace std;

#include"Circle.h"

Circle::Circle() {
	radious = 1;
	cout << "�������� " << radious << " �� �� ����" << endl;
}

Circle::Circle(int r) {
	radious = r;
	cout << "�������� " << radious << " �� �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

