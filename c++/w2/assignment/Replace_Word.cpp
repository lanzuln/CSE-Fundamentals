#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, X;
        cin >> S >> X;

        string ans = "";
        int n = S.size();
        int m = X.size();

        for (int i = 0; i < n; i++) {
            bool match = true;

            if (i + m - 1 < n) {
                for (int j = 0; j < m; j++) {
                    if (S[i + j] != X[j]) {
                        match = false;
                        break;
                    }
                }
            } else {
                match = false;
            }
            
            if (match) {
                ans += '#';
                i += m - 1;
            } 
            else {
                ans += S[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
