#include<iostream>
using namespace std;

class Rect;

class Rectmanager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width;
	int height;
public:
	Rect(int width, int height) { this->height = height; this->width = width; }
	friend bool Rectmanager::equals(Rect r, Rect s);
};

bool Rectmanager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

int main() {
	Rect r(3, 4); 
	Rect s(3, 4);
	Rectmanager man;

	if (man.equals(r, s)) cout << "equals" << endl;
	else cout << "not equals" << endl;
}