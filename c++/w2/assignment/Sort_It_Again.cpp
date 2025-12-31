#include <bits/stdc++.h>
using namespace std;

struct Student {
    string nm;
    int cls, math_marks, eng_marks;
    char s;
    long long id;    
};


bool compare(Student a, Student b) {
    if (a.eng_marks != b.eng_marks) return a.eng_marks > b.eng_marks; 
    if (a.math_marks != b.math_marks) return a.math_marks > b.math_marks; 
    return a.id < b.id; 
}



int main() {
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + N, compare);

    for (int i = 0; i < N; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "
             << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}
