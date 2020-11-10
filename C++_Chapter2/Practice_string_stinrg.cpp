#include<iostream>
#include<string>

using namespace std;

int main() {
	string song("LOVE BOMB");
	string fromis("fromis_9");
	string singer;

	cout << song + " is 0000's song.\n";
	cout << "(Hint : The first alphabet of this singer is " << fromis[0] << ") : ";

	cin >> singer;

	if (singer == "fromis_9") {
		cout << "Correct!\n";
	}
	else
		cout << "Wrong!!";

}