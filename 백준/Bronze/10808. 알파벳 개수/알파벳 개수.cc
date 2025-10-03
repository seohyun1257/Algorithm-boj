#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <typeinfo>


using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[26] = { 0 };
	string S;
	cin >> S;
	int size = S.size();
	for (int i = 0;i < size;i++) {
		int s = S[i] - 'a';
		arr[s] = arr[s] + 1;
	}

	for (int x : arr) {
		cout << x << ' ';
	}

	return 0;
}




