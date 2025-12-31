#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> Item(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> Item[i];
    }

    
    vector<long long> pre_sum(n + 1);

    
    pre_sum[1] = Item[1];

    for (int i = 2; i <= n; i++)
    {
        pre_sum[i] = pre_sum[i - 1] + Item[i];
    }


    for (int i = n; i >= 1; i--)
    {
        cout << pre_sum[i] << " ";
    }

    return 0;
}
