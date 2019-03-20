#include <bits/stdc++.h>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
int mn(int ar[], int arr[], int n)
{
    int mnum=0,i=0;
    for(i=0; i<=n; i++) {mnum= (mnum ^ ar[i]);}
    for(i=0; i<=n-1; i++) {mnum= (mnum ^ arr[i]);}
    return mnum;
}
int main()
{
    int n, i, j;
    cin >> n; n--; int a[n],b[n-1],c[n-2];
    for(i=0; i<=n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<=n-1; i++)
    {
        cin >> b[i];
    }
    for(i=0; i<=n-2; i++)
    {
        cin >> c[i];
    }
    cout << mn(a,b,n) << endl;
    cout << mn(b,c,n-1);
}
