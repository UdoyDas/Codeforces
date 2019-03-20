#include <bits/stdc++.h>
#include <math.h>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    ll n, r, inside, enter[1000]={0}, capacity=0,i, ex;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> ex >> enter[i];
        inside = enter[i-1] - ex;
        enter[i]+= inside;
        if(enter[i]>capacity) capacity=enter[i];
    }

    cout << capacity;
}
