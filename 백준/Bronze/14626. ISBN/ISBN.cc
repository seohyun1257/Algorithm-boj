#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	cin >> line;


	int ast;
	int sum = 0;
	for (int i = 0;i < 12;i++) { //마지막 체크기호는 반복문에서 제외
		if (line[i] == '*') ast = i;//별표 자리 확인
		else if ((i + 1) % 2 == 0) sum += (line[i] - '0') * 3;
		else sum += (line[i] - '0');

	}

	int check = line[12] - '0'; //ISBN으로 계산한 합의 1의 자릿수
	int cnt = 0;
	while ((check + sum) % 10 != 0) {
		if ((ast + 1) % 2 == 0) sum += 3;
		else sum += 1;


		cnt++;
	}

	cout << cnt;




	return 0;

}