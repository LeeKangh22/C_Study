#include<iostream>

using namespace std;

class Circle {
public:
	int radious;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle():Circle(1) {};

Circle::Circle(int r) {
	radious = r;
	cout << "반지름 " << radious << " 인 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "Donut's area >> " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "Pizza's area >> " << area << endl;

}