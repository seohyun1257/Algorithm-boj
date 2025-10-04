#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <typeinfo>
using namespace std;

//0~8을 담을 배열생성
//string으로 입력값 받고 인덱스로 해당 숫자 확인
//0~8까지는 배열 값 +1
//9면 arr[6]의 값을 +1
//배열의 값 중 가장 큰 숫자를 출력
//만약 가장 큰 숫자가 arr[5]라면 val/2 + 나머지 해서 출력


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[9] = { 0 };
	string S;
	cin >> S;
	int size = S.size();

	for (int i = 0; i < size; i++) {
		int num = S[i] - '0';
		if (num == 9) {
			arr[6]++;
		}
		else arr[num] = arr[num] + 1;



	}
	int max = arr[0];
	int max_index = 0;

	if (arr[6] > 1) { arr[6] = (arr[6] / 2) + (arr[6] % 2); }

	for (int i = 1; i < 9; i++) {
		if (max < arr[i]) { 
			max = arr[i]; 
			max_index = i;
		}

	}
	cout << max;
	

	return 0;
}

