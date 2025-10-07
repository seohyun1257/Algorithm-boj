#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main() {


	int N;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		double x;
		cin >> x;
		arr[i] = x;
	}
	//average
	double ave = 0;
	for (int i = 0; i < N; i++) {
		ave = ave + arr[i];
	}
	ave = round(ave / N) + 0.0;
	cout << ave << '\n';

	//median
	sort(arr, arr + N);

	int med = round(N / 2);
	cout << arr[med] << '\n';

	//mode
	vector<int> count(8001, 0);
	
	for (int i = 0;i < N;i++) {
		count[arr[i] + 4000]++;
	}
	int mode = 0;        
	int modeMax = 0;    
	bool second = false; 

	for (int i = 0; i <= 8000; i++) {
		if (count[i] > 0) {
			if (count[i] > modeMax) {
				modeMax = count[i];
				mode = i - 4000;
				second = false; 
			}
			else if (count[i] == modeMax && !second) {
				mode = i - 4000;
				second = true;
			}
		}
	}
	cout << mode << '\n';

	//range
	int range = arr[N-1] - arr[0];
	cout << range;






	return 0;
}