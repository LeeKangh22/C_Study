#include<iostream>

using namespace std;

int main() {

	int menu;
	int cnt;
	char menu1[] = { "«��" };
	char menu2[] = { "¥��" };
	char menu3[] = { "������" };

	cout << "*****�¸��忡 ���� ���� ȯ���մϴ�*****";
	while (1) {
		cout << "\n«��:1, ¥��:2, ������:3, ����:4 >> ";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		else if (menu > 4 || menu < 1) {
			cout << "�ٽ� �ֹ��ϼ���!\n";
		}
		else {
			cout << "���κ�? >> ";
			cin >> cnt;
			if (menu == 1)
				cout << menu1 << " " << cnt << "�κ� ���Խ��ϴ�";
			else if (menu == 2)
				cout << menu2 << " " << cnt << "�κ� ���Խ��ϴ�";
			else if (menu == 3)
				cout << menu3 << " " << cnt << "�κ� ���Խ��ϴ�";
		}

	}
}