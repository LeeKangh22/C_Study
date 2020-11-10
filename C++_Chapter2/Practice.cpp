#include<iostream>

using namespace std;

double area(int r) {
	return 3.14 * r * r;
}

int main() {
	int r;
	cout << "Insert range of circle : ";
	cin >> r;
	cout << "Circle's area is : " << area(r);

}