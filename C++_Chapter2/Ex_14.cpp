#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char coffee[100];
	int cnt;
	int money=0;
	
	char coffee_1[] = { "����������" };
	char coffee_2[] = { "�Ƹ޸�ī��" };
	char coffee_3[] = { "īǪġ��" };
	
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�.";
	while (1) {
		cout << "\n�ֹ�>>";
		cin >> coffee >> cnt;
		if (strcmp(coffee, coffee_1) == 0) {
			cout << 2000 * cnt << "�� �Դϴ�. ���ְ� �弼��.";
			money += 2000 * cnt;
		}
		else if (strcmp(coffee, coffee_2) == 0) {
			cout << 2300 * cnt << "�� �Դϴ�. ���ְ� �弼��.";
			money += 2300 * cnt;
		}
		else if(strcmp(coffee, coffee_3) == 0) {
			cout << 2500 * cnt << "�� �Դϴ�. ���ְ� �弼��.";
			money += 2500 * cnt;
		}
		if (money > 20000)
			break;
	}
	cout << "\n���� " << money << "���� �Ǹ��ؼ� ī�並 �ݽ��ϴ�. ���� ����~~~";
}