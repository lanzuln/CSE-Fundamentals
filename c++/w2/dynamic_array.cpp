
#include <bits/stdc++.h>
using namespace std;

//  ========== dynamic array declear kora 


// int* fun(){
//     int  *a = new int[5];
//     for(int i=0; i<5; i++){
//         cin >> a[i];
//     }
//     return a;
// }
// int main()
// {

//     int* x = fun();
//      for(int i=0; i<5; i++){
//         cout << x[i] << " ";
//     }
// }  





//  ============= array এর সাইজ বারানো 

int* fun(){
    int  *a = new int[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    return a;
}
int main()
{

    int* x = fun();
     for(int i=0; i<5; i++){
        cout << x[i] << " ";
    }
}  
