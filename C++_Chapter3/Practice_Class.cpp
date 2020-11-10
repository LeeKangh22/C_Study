#include<iostream>

using namespace std;

class Circle {
public:
	int radious;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle donut;
	Circle pizza;

	cout << "Insert Donut's radious : ";
	cin >> donut.radious;
	cout << "Donut's Area >> " << donut.getArea();

	cout << "\nInsert Pizza's radious : ";
	cin >> pizza.radious;
	cout << "Pizza's Area >> " << pizza.getArea();
}