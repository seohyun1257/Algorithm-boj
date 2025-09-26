#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <set>

using namespace std;



int main() {
	int n, m;
	cin >> n >> m;

	set<string> nolisten, nosee;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		nolisten.insert(name);
	}
	for (int i = 0; i < m; i++) {
		string name;
		cin >> name;
		nosee.insert(name);
	}


	set<string> result;
	set_intersection(nolisten.begin(), nolisten.end(), nosee.begin(), nosee.end(), inserter(result, result.begin()));

	cout << result.size() << '\n';
	for (auto i = result.begin();i != result.end();i++) {
		cout << *i << '\n'; //i는 iterator이기 때문에 컨테이너의 원소에 접근할 수 있는 정보가 저장되어 있음
							// 따라서 역참조를 통해 해당 iterator가 가리키는 곳의 값을 가져와서 출력

	}
	//for (string name : result) { //cpp 11 이상에서 지원하는 range-based for loop, 자료형 변수명 : 컨테이너
	//	cout << name << '\n';
	//}

	}
	







