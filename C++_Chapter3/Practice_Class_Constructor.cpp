#include<iostream>

using namespace std;

class Circle {
public:
	int radious;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radious = 1;
	cout << "반지름 " << radious << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radious = r;
	cout << "반지름 " << radious << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle donut;
	Circle pizza(30);

	double area = donut.getArea();
	cout << "donut's area >> " << area<<endl;

	area = pizza.getArea();
	cout << "pizza's area >> " << area << endl;
}