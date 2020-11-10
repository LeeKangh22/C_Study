#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char coffee[100];
	int cnt;
	int money=0;
	
	char coffee_1[] = { "에스프레소" };
	char coffee_2[] = { "아메리카노" };
	char coffee_3[] = { "카푸치노" };
	
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다.";
	while (1) {
		cout << "\n주문>>";
		cin >> coffee >> cnt;
		if (strcmp(coffee, coffee_1) == 0) {
			cout << 2000 * cnt << "원 입니다. 맛있게 드세요.";
			money += 2000 * cnt;
		}
		else if (strcmp(coffee, coffee_2) == 0) {
			cout << 2300 * cnt << "원 입니다. 맛있게 드세요.";
			money += 2300 * cnt;
		}
		else if(strcmp(coffee, coffee_3) == 0) {
			cout << 2500 * cnt << "원 입니다. 맛있게 드세요.";
			money += 2500 * cnt;
		}
		if (money > 20000)
			break;
	}
	cout << "\n오늘 " << money << "원을 판매해서 카페를 닫습니다. 내일 봐요~~~";
}