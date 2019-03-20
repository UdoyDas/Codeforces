#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s,s1; int i,c=0,d=0;
    cin >> s;
    for(i=0; i<s.size(); i++)
    {
        if(islower(s[i])){
            c++;}
        else{
            d++;}
    }
    if(c==d)
    {
        for(i=0; i<s.size(); i++)
        {
            s1+=tolower(s[i]);
        }
        cout << s1;
    }
    else if(c>d)
    {
        for(i=0; i<s.size(); i++)
        {
            s1+=tolower(s[i]);
        }
        cout << s1;
    }
    else
    {
        for(i=0; i<s.size(); i++)
        {
            s1+=toupper(s[i]);
        }
        cout << s1;
    }
}
