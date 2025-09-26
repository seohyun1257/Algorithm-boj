#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;



int main() {
	int num;
	cin >> num;

	int * arr1 = new int[num];
	int time = 0;
	for (int i = 0; i < num; i++) {
		cin >> arr1[i];
	}

	sort(arr1, arr1 + num);
	
	
	for (int i = 0;i < num;i++) {
		for (int j = 0; j < i + 1;j++) {
			time = time + arr1[j];
		}

	}
	cout << time;




}



