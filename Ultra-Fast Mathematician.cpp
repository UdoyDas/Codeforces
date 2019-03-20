#include <bits/stdc++.h>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string n,k,s;
    cin >> n>> k;
    int l;
    l= n.size();
    for(int i=0; i<l; i++)
    {
        if(n[i]==k[i]) s+='0';
        else s+='1';
    }
    cout<<s;
}
