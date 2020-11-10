#include<iostream>

using namespace std;

class Rectangle {
public:
	int width, hight;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle() {
	width = hight = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	hight = h;
}

Rectangle::Rectangle(int length) {
	width = hight = length;
}

bool Rectangle::isSquare() {
	if (width == hight)
		return true;
	else
		return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())
		cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare())
		cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare())
		cout << "rect3�� ���簢���̴�." << endl;

}