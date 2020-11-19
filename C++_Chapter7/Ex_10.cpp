#include<iostream>
using namespace std;

class Statistics {
	int* arr;
	int index;
public:
	Statistics() { arr = new int[10]; index = 0; }
	bool operator!();
	Statistics &operator <<(int x);
	void operator ~();
	Statistics& operator >>(int &avg);
};

bool Statistics::operator!() {
	int i = 0;
	if (index == 0)
		return true;
	else return false;
}

Statistics& Statistics::operator <<(int x) {
	arr[index] = x;
	++index;
	return*this;
}

void Statistics::operator~() {
	for (int i = 0; i < index; i++)
		cout << arr[i] << " ";
	cout << endl;
}

Statistics &Statistics::operator>>(int &avg) {
	int sum=0;
	for (int i = 0; i < index; i++)
		sum += arr[i];
	avg = sum / index;
	return *this;
}

int main() {
	Statistics stat;
	if (!stat)
		cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라 >> ";
	for (int i = 0; i < 5; i++)
		cin >> x[i];

	for (int i = 0; i < 5; i++)
		stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;

}

