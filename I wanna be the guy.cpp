#include <bits/stdc++.h>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    int n,i,m,k,x,y;
    cin >> k;
    cin >> x;
    int a[1000];
    for(i=0; i<x; i++){cin >> n; a[n]=1;}
    cin >> y;
    for(i=0; i<y; i++){cin >> n; a[n]=1;} 
    bool d=false;
    for(i=1; i<=k; i++) 
    {
        if(a[i]!=1) {d=true; break;}
        else d=false;
    }
    if(d==false) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}
