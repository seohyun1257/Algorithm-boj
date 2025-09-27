#include <iostream>
#include <map>
#include <string>

using namespace std;



int main() {
	map<string, string> map;
	int n, m;
	cin >> n >> m;

	for (int i = 0;i < n;i++) {
		string site, password;
		cin >> site >> password;
		map.insert({ site,password });
	}
	for (int i = 0;i < m;i++) {
		string findsite;
		cin >> findsite;
		auto it = map.find(findsite); //iterator 반환
		if (it != map.end()) {
			cout << it->second << '\n'; //value값 
			
		}
	}

	}
	

