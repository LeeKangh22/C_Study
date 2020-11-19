#include<iostream>
using namespace std;

class Stack {
	int* arr;
	int index;
public:
	Stack() { arr = new int[10]; index = 0; }
	Stack& operator<<(int x);
	bool operator!();
	Stack& operator>>(int& x);
};

Stack& Stack::operator<<(int x) {
	arr[index] = x;
	index++;
	return *this;
}

bool Stack::operator!() {
	if (index == 0)
		return true;
	else return false;
}

Stack& Stack::operator>>(int &x) {
	x = arr[index-1];
	index--;
	return *this;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack)
			break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}


