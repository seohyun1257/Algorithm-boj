#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <typeinfo>

using namespace std;

//배열에 포켓몬이름 차곡차곡 담기
//입력이 int면 배열의 인덱스로 접근하여 값 출력
//입력이 String이면 배열에서 같은 값을 찾아서 인덱스+1 출력
//string -> int 변환 방법
//1. stoi함수 사용 (cpp11 도입)
//2. <sstream> 라이브러리의 stringstream 클래스 객체 생성 후 int 변환 메소드 사용



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;
	map<string, int> dictionary;

	string* arr = new string[N];

	for (int i = 0;i < N;i++) {
		string name;
		cin >> name;
		arr[i] = name;
		dictionary.insert({ name,i });
	}
	string Poketmon;
	for (int i = 0;i < M;i++) {
		cin >> Poketmon;
		if ('0'<= Poketmon[0] && Poketmon[0] <= '9') {
			int num = stoi(Poketmon);
			cout << arr[num -1] << '\n';
		}
		else {
			auto it = dictionary.find(Poketmon);
			cout << (it->second)+1 << '\n';
		}

	}


}

