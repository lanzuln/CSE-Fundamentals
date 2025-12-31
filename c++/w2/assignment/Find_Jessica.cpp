#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);  

    stringstream name(S);
    string word;
    bool found = false;

    while (name >> word) {
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
