#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int hour, minute, time;
	cin >> hour >> minute >> time;

	minute += time;

	if (minute >= 60) {
		int cnt =0;
		while (minute >= 60) {
			minute -= 60;
			cnt++;
		}
		if ((hour + cnt) > 23) {
			hour = (hour + cnt) - 24;
		}
		else hour += cnt;
		cout << hour << ' ' << minute;
	}
	else cout << hour << ' ' << minute;
	
	return 0;
}
