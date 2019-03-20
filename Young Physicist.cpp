#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int x,a=0,y,b=0,z,c=0,i;
    for(i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        a+=x; b+=y; c+=z;
    }
    if(a==0 && b==0 && c==0)
        cout << "YES";
    else
        cout << "NO";
}
