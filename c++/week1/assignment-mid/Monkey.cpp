#include <bits/stdc++.h>
using namespace std;

int main() {
    char line[100001]; 
    
    while (cin.getline(line, 100001)) {
        string temp = "";
       
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                temp += line[i];
            }
        }

        sort(temp.begin(), temp.end());
        cout << temp << endl;
    }

    return 0;
}
