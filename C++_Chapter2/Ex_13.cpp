#include<iostream>

using namespace std;

int main() {

	int menu;
	int cnt;
	char menu1[] = { "짬뽕" };
	char menu2[] = { "짜장" };
	char menu3[] = { "군만두" };

	cout << "*****승리장에 오신 것을 환영합니다*****";
	while (1) {
		cout << "\n짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";
		cin >> menu;
		if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else if (menu > 4 || menu < 1) {
			cout << "다시 주문하세요!\n";
		}
		else {
			cout << "몇인분? >> ";
			cin >> cnt;
			if (menu == 1)
				cout << menu1 << " " << cnt << "인분 나왔습니다";
			else if (menu == 2)
				cout << menu2 << " " << cnt << "인분 나왔습니다";
			else if (menu == 3)
				cout << menu3 << " " << cnt << "인분 나왔습니다";
		}

	}
}