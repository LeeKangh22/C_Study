#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[100];
	cout << "Insert string (under 100) : ";
	cin.getline(str, sizeof(str), '\n');

	int cnt = 0;

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == 'x') {
			cnt++;
		}
	}
	cout << "x >> " << cnt;


}