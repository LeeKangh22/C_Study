#include<iostream>
using namespace std;

class Circle {
	int radious;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadious(int r) { radious = r; }
	double getArea() { return 3.14 * radious * radious; }
};

Circle::Circle() {
	radious = 1;
}

Circle::Circle(int r) {
	radious = r;
}

Circle::~Circle() {}

int main() {
	int radious;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>>";
		cin >> radious;
		if (radious < 0) break;
		Circle* p = new Circle(radious);
		cout << "���� ������ >> " << p->getArea() << endl;
		delete p;
	}
}

