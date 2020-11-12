#include<iostream>
using namespace std;

class Circle {
	int radious;
public:
	Circle();
	Circle(int r);
	void setRadious(int r);
	double getArea();
};

Circle::Circle() {
	radious = 1;
}

Circle::Circle(int r) {
	radious = r;
}

void Circle::setRadious(int r) {
	radious = r;
}

double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle  donut;
	Circle* p_donut = &donut;
	cout << "Donut's area >> " << p_donut->getArea() << endl;

	Circle* pizza = new Circle(30);
	cout << "Pizza's area >> " << pizza->getArea() << endl;
	pizza->setRadious(40);
	cout << "Pizza's area change >> " << pizza->getArea() << endl;

	Circle circle[3];
	Circle* p_circle = circle;

	p_circle[0].setRadious(10);
	p_circle[1].setRadious(20);
	p_circle[2].setRadious(30);

	for (int i = 0; i < 3; i ++ ) {
		cout << "Circle " << i + 1 << "'s area >> " << p_circle[i].getArea() << endl;
	}
	
}