#include<iostream>

using namespace std;

class Rectangle {
public:
	int width;
	int hight;
	int getArea();
};

int Rectangle::getArea() {
	return hight * width;
}

int main() {
	Rectangle rect1;
	Rectangle rect2;

	cout << "Insert rect1's hight and width >> ";
	cin >> rect1.hight >> rect1.width;
	cout << "rect1's area >> " << rect1.getArea();

	cout << "\nInsert rect2's hight and width >> ";
	cin >> rect2.hight >> rect2.width;
	cout << "rect2's area >> " << rect2.getArea();

}