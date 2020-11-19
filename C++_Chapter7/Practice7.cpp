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
	//friend Power operator+(int op1, Power op2);
	friend Power operator+(Power op1, Power op2);
	friend Power& operator++(Power&op);
	friend Power operator++(Power& op, int x);
	Power& operator<<(int n);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

//Power operator+(int op1, Power op2) {
	//Power tmp;
	//tmp.kick = op1 + op2.kick;
	//tmp.punch = op1 + op2.punch;
	//return tmp;
//}

Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}

Power& operator++(Power& op) {
	op.kick++;
	op.punch++;
	return op;
}
Power operator++(Power& op, int x) {
	Power tmp = op;
	op.kick++;
	op.punch++;
	return tmp;
}

Power &Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this;

}

int main() {
	Power a(3, 4), b(3,4),c;
	c = b + a;
	a.show();
	b.show();
	c.show();
	c = a++;
	a.show();
	c.show();
	c = ++a;
	c.show();
	a << 3 << 5 << 6;
	a.show();
}