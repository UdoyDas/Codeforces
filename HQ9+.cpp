#include <bits/stdc++.h>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s; int i,j,l;
    cin >> s;
    l=s.size();
    for(i=0; i<l; i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            cout << "YES"; return 0;
        }
    }
    cout << "NO";
    return 0;
}
