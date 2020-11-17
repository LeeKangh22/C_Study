#include<iostream>
using namespace std;

class Array {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retsize);
};

int* Array::concat(int s1[], int s2[], int size) {
	int *s3=new int[10];
	for (int i = 0; i < 5; i++) {
		s3[i] = s1[i];
	}
	for (int i = 0; i < 5; i++) {
		s3[i+5] = s2[i];
	}
	return s3;
}

int* Array::remove(int s1[], int s2[], int size, int& retsize) {
	int count=0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j])
				s1[i] = { 0 };
		}
	}
	
	for (int i = 0; s1[i] != NULL; i++) {
		count++;
	}
	retsize = count;
	if (count == 0)return NULL;
	else {
		int* s3 = new int[count];
		for (int i = 0; i < count; i++) {
			s3[i] = s1[i];
		}
		return s3;
	}
}

int main() {
	Array arr;
	Array* p;
	p = &arr;

	int s1[5];
	int s2[5];

	int size = 10;
	int& retsize = size;

	int* s3 = new int[10];

	cout << "정수 " << 5 << " 개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> s1[i];
	}

	cout << "정수 " << 5 << " 개를 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> s2[i];
	}

	cout << "합친 정수 배열을 출력한다." << endl;

	s3=p->concat(s1, s2, 5);

	for(int i=0;i<10;i++)
		cout << s3[i] << " ";
	cout << endl;

	s3 = p->remove(s1, s2, 5, retsize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 갯수는 " << retsize << endl;
	for(int i=0;i<2;i++)
		cout << s3[i] << " ";

}