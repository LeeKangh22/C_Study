#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char password_I[100];
	char password_II[100];

	cout << "Insert new password : ";
	cin >> password_I;
	int i = 3;

	while (true) {
		cout << "Insert password : ";
		cin >> password_II;
		if (strcmp(password_I, password_II) == 0) {
			cout << "Program is unlocked!";
			break;
		}
		else {
			cout << "Wrong password!\n";
			i--;
			cout << "(Chance : " << i << ")";
			if (i == 0)
				break;
		}
	}
	if (i == 0) {
		cout << "\nprogram is locked!";
	}

}