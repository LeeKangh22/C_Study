#include<iostream>
#include<cstring>

int main() {
	char buf[10000];
	int alpha=0;
	int count;

	/*�ؽ�Ʈ �Է�*/
	std::cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ' ; ' �Դϴ�. 10000�� ���� �����մϴ�.\n";
	std::cin.getline(buf, sizeof(buf), ';');

	/*���ĺ� �ҹ��� ��ȯ*/
	for (int i = 0; i < sizeof(buf); i++) {
		if (buf[i] > 64) {
			buf[i]=tolower(buf[i]);
		}
	}
	/*���ĺ� ���� ����*/
	for (int i = 0; i < sizeof(buf); i++) {
		if((int(buf[i]))>96&&(int(buf[i]))<123)
			alpha++;
	}
	std::cout << "�� ���ĺ� �� " << alpha << "\n";
	
	/*������׷� �׸���*/
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