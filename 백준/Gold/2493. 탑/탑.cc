#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

//Tower의 번호와 높이를 저장할 구조체 Tower
//x의 입력을 받고 나면 top의 height와 크기 비교
//기존 height가 더 큼 -> x의 신호는 해당 tower가 수신, stack에 넣는다.
//x가 더 큼 -> top을 pop (높이가 낮아서 신호를 받을 수 없음), 다음 top과 비교 -> stack이 비면 받을 수 있는 tower 0
//while문으로 (stack이 비지 않음 + top.height < x) 이라면 top을 pop
//stack이 비어서 while문 종료 -> 수신할 수 있는 왼쪽 탑이 없는 상태, 0 출력
//top.height > x 라서 while문 종료 -> 해당 탑이 신호를 수신하는 탑이므로 top.index 출력


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	struct Tower {
		int index;
		int height;
	};

	stack<Tower> S;

	int N;
	cin >> N;

	int top = 0;

	for (int i = 1;i <= N;i++) {
		int x;
		cin >> x;
		while (!S.empty() && S.top().height < x) {
			S.pop();
		}
		if (S.empty()) {
			cout << 0 << ' ';
		}
		else cout << S.top().index << ' ';

		S.push({ i,x });

	}


	return 0;

}