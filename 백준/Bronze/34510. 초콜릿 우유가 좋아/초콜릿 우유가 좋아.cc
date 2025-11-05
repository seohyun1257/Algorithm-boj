#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//if N이 짝수라면 안겹치는 부분(직사각형)은 N층 + 겹치는 부분(삼각형)은 N/2 개
//if N이 홀수라면 직전 짝수(N-1)의 높이 + H1 + H2 + H3

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long line, triangle, rectangle, N;
    cin >> line >> triangle >> rectangle >> N;

     long long height = 0;

    if (N % 2 == 0) {
        height = (rectangle * N) + triangle * (N / 2);
    }
    else {
        N--;
        height = (rectangle * N) + triangle * (N / 2)
            + line + triangle + rectangle;
    }

    cout << height;


    
    return 0;
}
