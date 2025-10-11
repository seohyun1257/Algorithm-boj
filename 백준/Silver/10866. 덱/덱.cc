#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];

int main() {


	int head = MX, tail = MX;

	int N;
	cin >> N;

	while (N) {
		string K;
		cin >> K;
		if (K == "push_front") {
			int n;
			cin >> n;
			dat[--head] = n;
		}
		else if (K == "push_back") {
			int n;
			cin >> n;
			dat[tail++] = n;
		}
		else if (K == "pop_front") {
			if (head == tail) {
				cout << "-1" << '\n';
			}
			else {
				cout << dat[head] << '\n';
				head++;
			}
		}
		else if (K == "pop_back") {
			if (head == tail) {
				cout << "-1" << '\n';
			}
			else {
				cout << dat[--tail] << '\n';
				
			}
		}
		else if (K == "size") {
			cout << tail - head << '\n';
		}
		else if (K == "empty") {
			if (head == tail) {
				cout << '1' << '\n';
			}
			else cout << '0' << '\n';
		}
		else if (K == "front") {
			if (head == tail) {
				cout << "-1" << '\n';
			}
			else {
				cout << dat[head] << '\n';
				
			}
		}
		else if (K == "back") {
			if (head == tail) {
				cout << "-1" << '\n';
			}
			else {
				cout << dat[tail - 1] << '\n';
			}
		}

		N--;
	}

	return 0;

}