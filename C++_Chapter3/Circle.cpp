#include<iostream>

using namespace std;

#include"Circle.h"

Circle::Circle() {
	radious = 1;
	cout << "반지름이 " << radious << " 인 원 생성" << endl;
}

Circle::Circle(int r) {
	radious = r;
	cout << "반지름이 " << radious << " 인 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

