#include<iostream>
#include<cstring>

int main() {
	char buf[10000];
	int alpha=0;
	int count;

	/*텍스트 입력*/
	std::cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ' ; ' 입니다. 10000개 까지 가능합니다.\n";
	std::cin.getline(buf, sizeof(buf), ';');

	/*알파벳 소문자 변환*/
	for (int i = 0; i < sizeof(buf); i++) {
		if (buf[i] > 64) {
			buf[i]=tolower(buf[i]);
		}
	}
	/*알파벳 개수 세기*/
	for (int i = 0; i < sizeof(buf); i++) {
		if((int(buf[i]))>96&&(int(buf[i]))<123)
			alpha++;
	}
	std::cout << "총 알파벳 수 " << alpha << "\n";
	
	/*히스토그램 그리기*/
	for (int i = 97; i < 123; i++) {
		count = 0;
		for (int j = 0; j < sizeof(buf); j++) {
			if (int(buf[j]) == i) 
				count++;
		}
		std::cout << char(i) <<"("<< count  << ") :";
		for (int k = 0; k < count; k++)
			std::cout << "*";
		std::cout << "\n";
	}

}