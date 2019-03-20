#include <bits/stdc++.h>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;
string its(int y)
{
    string s;
    s=y%10;y/=10;
    s+=y%10;y/=10;
    s+=y%10;y/=10;
    s+=y%10;y/=10;
    return s;
}

bool all_unique(std::string const &input) 
{ 
    return input.size() == std::set<char> {input.begin(), input.end()}.size();
}

int main()
{
   int y,i; string s;
   cin >> y;
   for(i=y+1; i<=10000; i++)
   {
       s=its(i);
       int d= all_unique(s);
        if(d==1) {cout << i; break;}
    }
}
