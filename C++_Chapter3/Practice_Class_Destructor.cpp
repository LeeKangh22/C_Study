#include<iostream>

using namespace std;

class Circle {
public:
	int radious;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle(){
	radious = 1;
	cout << "반지름이 " << radious << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radious = r;
	cout << "반지름이 " << radious << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름이 " << radious << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;
}