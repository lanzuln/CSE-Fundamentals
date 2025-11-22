#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while(T--) {
        int N, S;
        cin >> N >> S;  

        int* A = new int[N];  

        
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }

        bool found = false;

       
        for(int i = 0; i < N-2; i++) {
            for(int j = i+1; j < N-1; j++) {
                for(int k = j+1; k < N; k++) {
                    if(A[i] + A[j] + A[k] == S) {
                        found = true;
                    }
                }
            }
        }

       
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";

        delete[] A; 
    }

    return 0;
}






// ================== explain 
// Test case 1 — N=5, S=10, A=[1,2,3,4,5]

// Loop iterations (সবগুলো triplet ও sum):

// i=0 (A[i]=1)

//     j=1 (A[j]=2)

//         k=2 (A[k]=3) → 1+2+3 = 6

//         k=3 (A[k]=4) → 1+2+4 = 7

//         k=4 (A[k]=5) → 1+2+5 = 8

//     j=2 (A[j]=3)

//         k=3 → 1+3+4 = 8

//         k=4 → 1+3+5 = 9

//     j=3 (A[j]=4)

//         k=4 → 1+4+5 = 10 ← match found

