#include <iostream>
using namespace std;

const int MX = 100000;
int dat[100000];
int head = 1, tail = 1;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	if (head == tail) {
		cout << "-1" << '\n';
	}
	else {
		cout << dat[head] << '\n';
		head++;
	}

}

void size() {
	cout << tail - head << '\n';
}

void empty() {
	if (tail - head == 0) {
		cout << "1" << '\n';
	}
	else cout << '0' << '\n';

}

void front() {
	if (head == tail) {
		cout << "-1" << '\n';
	}
	else {
		cout << dat[head] << '\n';
	}
}

void back() {
	if (head == tail) {
		cout << "-1" << '\n';
	}
	else {
		cout << dat[tail-1] << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	while (N) {
		string K;
		cin >> K;
		if (K == "push") {
			int n;
			cin >> n;
			push(n);
		}
		else if (K == "pop") {
			pop();
		}
		else if (K == "size") {
			size();
		}
		else if (K == "empty") {
			empty();
		}
		else if (K == "front") {
			front();
		}
		else if (K == "back") {
			back();
		}

		N--;
	}

	return 0;

}