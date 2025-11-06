#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

//S'은 길이가 [n/3]인 S
//rev(S)는 S를 뒤집은 것
//tail(S)는 S의 첫 글자를 제거한 것

string Prefix(string S) {
    int size;
    string prefixS;
    if (S.length() % 3 == 0) {
        size = S.length() / 3;
    }
    else size = (S.length() / 3) + 1;
    for (int i = 0;i < size;i++) {
        prefixS = prefixS + S[i];
    }

    return prefixS;
}

string rev(string S) {
    string revS;
    for (int i = S.length() - 1;i >= 0;i--) {
        revS = revS + S[i];
    }

    return revS;
}

string tail(string S) {
    string tailS = S.substr(1);

    return tailS;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string input;
        cin >> input;
        string inp = Prefix(input);
        if (input == inp + rev(inp) + inp) {
            cout << '1' <<'\n';
            continue;
        }
        else if (input == inp + tail(rev(inp)) + inp) {
            cout << '1' << '\n';
            continue;
        }
        else if (input == inp + rev(inp) + tail(inp)) {
            cout << '1' << '\n';
            continue;
        }
        else if (input == inp + tail(rev(inp)) + tail(inp)) {
            cout << '1' << '\n';
            continue;
        }
        else cout << '0' << '\n';

    }
    
    return 0;
}
