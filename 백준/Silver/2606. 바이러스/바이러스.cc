#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <typeinfo>


using namespace std;


//연결된 컴퓨터 쌍을 입력으로 받고, 두 숫자 중 하나라도 set에 있다면 둘 다 set에 넣고, true로 변경
//없으면 changed = false로 while문 안들어감
//set에 들어가 있는 숫자의 개수 출력 -1 (1번 컴퓨터 개수 빼기)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int** arr = new int* [K];
    for (int i = 0; i < K; i++) {
        arr[i] = new int[2];
        cin >> arr[i][0] >> arr[i][1];
    }

    set<int> infected;
    infected.insert(1);

    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < K; i++) {
            int a = arr[i][0], b = arr[i][1];
            if (infected.count(a) || infected.count(b)) {
                if (infected.insert(a).second) changed = true;
                if (infected.insert(b).second) changed = true;
            }
        }
    }

    cout << infected.size() - 1;

    for (int i = 0; i < K; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}




