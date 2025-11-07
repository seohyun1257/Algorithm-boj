#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    cin >> L;
    string S;
    cin >> S;

    long long res = 0;

    array<char, 26> alphabet;
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }
    long long power = 1;

    for (int i = 0;i < L;i++) {
        char c = S[i];

        auto it = find(alphabet.begin(), alphabet.end(), c);
        long long index = (it - alphabet.begin()) + 1;

        res = (res + index * power) % 1234567891;
        power = (power * 31) % 1234567891;
    }
    cout << res;
    return 0;
}
