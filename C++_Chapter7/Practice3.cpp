#include<iostream>
using namespace std;

class Rect;

class Rectmanager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->height = height; this->width = width; }
	friend Rectmanager;
};

bool Rectmanager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}

void Rectmanager::copy(Rect& dest, Rect& src) {
	dest.width = src.width; dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	Rectmanager man;

	man.copy(b, a);
	if (man.equals(a, b))cout << "equals" << endl;
	else cout << "not equals" << endl;
}

