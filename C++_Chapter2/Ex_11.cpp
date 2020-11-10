#include<iostream>

using namespace std;

int main() {
	int k, n = 0;
	int sum = 0;
	cout << "Insert final num :";
	cin >> n;
	for (k = 1; k < n + 1; k++)
		sum += k;
	cout << "1 to " << n << " =" << sum;
}