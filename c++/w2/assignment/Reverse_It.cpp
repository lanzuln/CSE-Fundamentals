#include <bits/stdc++.h>
using namespace std;




struct Student
{
    string nm;
    int cls, id;
    char s;
};

int main()
{
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    int left = 0;
    int right = N - 1;

    while (left < right)
    {
        swap(a[left].s, a[right].s);
        left++;
        right--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}
