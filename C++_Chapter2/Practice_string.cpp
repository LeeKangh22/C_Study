#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main() {
	char name[100];
	cout << "Insert your name : ";
	cin >> name;

	int n = strlen(name);

	cout << "your name is " << name << endl;
	cout << "and your name's length is " << n;


}