#include<iostream>

using namespace std;

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++)
		res += k;
	return res;
}

int main() {
	int n = 0;
	cout << "Insert final num : ";
	cin >> n;
	cout << "1 to " << n << " = " << sum(1, n);
}