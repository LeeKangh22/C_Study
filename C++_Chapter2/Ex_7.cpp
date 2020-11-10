#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char name1[20];
	char name2[20];
	char name3[20];
	char name4[20];
	char name5[20];
	int arr[5];
	char name_L[20];

	cout << "Enter 5 names : ";
	cin.getline(name1, sizeof(name1), ';');
	cin.getline(name2, sizeof(name2), ';');
	cin.getline(name3, sizeof(name3), ';');
	cin.getline(name4, sizeof(name4), ';');
	cin.getline(name5, sizeof(name5), ';');

	arr[0] = strlen(name1);
	arr[1] = strlen(name2);
	arr[2] = strlen(name3);
	arr[3] = strlen(name4);
	arr[4] = strlen(name5);

	int max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	if (arr[0] == max)
		strcpy_s(name_L,sizeof(name_L), name1);
	else if (arr[1] == max)
		strcpy_s(name_L, sizeof(name_L), name2);
	else if (arr[2] == max)
		strcpy_s(name_L, sizeof(name_L), name3);
	else if (arr[3] == max)
		strcpy_s(name_L, sizeof(name_L), name4);
	else if (arr[4] == max)
		strcpy_s(name_L, sizeof(name_L), name5);
	

	cout << "Longest name is " << name_L;


	
}