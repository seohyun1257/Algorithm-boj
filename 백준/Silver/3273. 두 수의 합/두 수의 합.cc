#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <typeinfo>
using namespace std;

//


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int num;
	cin >> num;
	int* arr = new int[num];
	set<int> s;
	for (int i = 0;i < num;i++) {
		cin >> arr[i];
	}

	int x, ans=0;
	cin >> x;
	
	for (int i = 0;i < num;i++) {
		int sub = x - arr[i];
		if (s.find(arr[i]) == s.end()) {
			s.insert(sub);
		}
		else {
			ans++;
		}

		
	}
	cout << ans;
	return 0;
}




