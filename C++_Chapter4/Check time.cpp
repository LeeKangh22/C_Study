#include<iostream>
#include<ctime>
using namespace std;

int main() {
	srand(time(NULL));
	double* d = new double(3.14);
	int* p = new int[5];
	double max = p[0];
	for (int i = 0; i < 5; i++) {
		p[i] = rand();
	}
	for (int i = 0; i < 5; i++) {
		if (max < p[i])
			max = p[i];
		cout << p[i] << endl;
	}
	cout << max << endl;
	delete []p;
}