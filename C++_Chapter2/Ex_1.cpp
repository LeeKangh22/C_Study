#include<iostream>

using namespace std;

int main() {

	int num = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 11; j++) {
			cout << num + j<<"   ";
		}
		cout << "\n";
		num += 10;
	}
}