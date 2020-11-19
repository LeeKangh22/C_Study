#include<iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator+=(Power op2);
	Power operator+(int op2);
	Power& operator++();
	Power operator++(int x);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

Power Power::operator+(int op2) {
	Power tmp;
	tmp.kick = kick + op2;
	tmp.punch = punch + op2;
	return tmp;
}

Power& Power::operator++() {
	kick++;
	punch++;
	return *this;
}

Power Power::operator++(int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;

}

int main() {
	Power a(3, 5), b(4, 6), c,d;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
	d = a + 2;
	d.show();
	d = b++;
	b.show();
	d.show();
	d = ++d;
	d.show();

}