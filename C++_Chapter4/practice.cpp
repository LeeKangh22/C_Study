#include<iostream>
using namespace std;

class Circle {
	int radious;
public:
	Circle() {
		radious = 1;
	}
	Circle(int r) {
		radious = r;
	}
	void setRadious(int radious) {
		this->radious = radious;
	}
	double getArea() {
		return 3.14 * radious * radious;
	}
	~Circle();
};

Circle::~Circle() {
	cout << "¼Ò¸êÀÚ ½ÇÇà" << endl;
}

int increase(Circle* waffle) {
	int r = waffle->setRadious();
}

int main() {
	Circle waffle(30);
	Circle circle[2][3] = { { Circle(4),Circle(5),Circle() },
					         {Circle(3),Circle(1),Circle(10)} };
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << circle[i][j].getArea() << endl;
		}
	}
	Circle* donut = new Circle(20);
	double donut_d = donut->getArea();
	cout << donut_d << endl;
	int* p = new int(20);
	cout << *p << endl;
	delete donut;
	delete p;
}