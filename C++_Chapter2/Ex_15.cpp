#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char int_1[10];
	char cal;
	char int_2[10];

	cout << "*****Calculating Program*****\n";
	cout << "(Insert X between two nums to quit program)\n";

	while (1) {
		cout << "\n? ";
		cin >> int_1 >> cal >> int_2;
		if (cal == '+')
			cout << atoi(int_1) << cal << atoi(int_2) << "=" << atoi(int_1) + atoi(int_2);
		else if (cal == '-')
			cout << atoi(int_1) << cal << atoi(int_2) << "=" << atoi(int_1) - atoi(int_2);
		else if (cal == '*')
			cout << atoi(int_1) << cal << atoi(int_2) << "=" << atoi(int_1) * atoi(int_2);
		else if (cal == '/')
			cout << atoi(int_1) << cal << atoi(int_2) << "=" << atoi(int_1) / atoi(int_2);
		else if (cal == '%')
			cout << atoi(int_1) << cal << atoi(int_2) << "=" << atoi(int_1) % atoi(int_2);
		else if (cal == 'X' || cal == 'x')
			break;
	}

	
	
}