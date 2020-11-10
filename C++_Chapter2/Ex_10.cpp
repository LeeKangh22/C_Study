#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[100];
	cout << "Enter string : ";
	cin >> str;

	for (int i = 1; i < strlen(str)+1; i++) {
		for (int j=0; j < i; j++) {
			cout << str[j];
		}
		cout << "\n";
	}
}