#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

int main() {
	set<int> s;

	int arr[10];

	for (int i = 0; i < 10;i++) {
		int num;
		cin >> num;
		int rem = num % 42;
		s.insert(rem);
	}

	int size = s.size();
	cout << size;

	

	return 0;
}