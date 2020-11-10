#include<iostream>

using namespace std;

#include"Circle.h"

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "Donut's area >> " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "Pizza's area >> " << area << endl;
}