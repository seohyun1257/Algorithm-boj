#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	list<char> list;
	
	string s;
	cin >> s;
	for (int i = 0;i < s.size();i++) {
		list.push_back(s[i]);
	}
	int i;
	cin >> i;

	auto it = list.end();
	while (i) {
		char c;
		cin >> c;

		if (c == 'P') {
			char x;
			cin >> x;
			list.insert(it, x);

		}
		else if (c == 'L') {
			if (it != list.begin()) {
				advance(it, -1);

			}
		}
		else if (c == 'D') {
			if (it != list.end()) {
				advance(it, 1);

			}
		}
		else if (c == 'B') {
			if (it != list.begin()) {
				advance(it, -1);
				it = list.erase(it);
			}
		}
		
		i--;
	}
	for (auto v : list) {
		cout << v;
	}
	cout << '\n';


	return 0;
}