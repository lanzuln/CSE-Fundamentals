#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    int* arr = new int[n];

  
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    return arr; 
}

int main() {
    int n;
    cin >> n;

    int* final_arr = sort_it(n);

    for(int i = 0; i < n; i++) {
        cout << final_arr[i] << " ";
    }
    cout <<"\n";

    for(int i = n-1; i >=0; i--) {
        cout << final_arr[i] << " ";
    }


    delete[] final_arr;

    return 0;
}
