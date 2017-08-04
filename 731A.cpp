#include<iostream>
#include<string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    char a1='a';
    int n=0,d1,d2,d3;
    cin >> s;

    for(int i=0;i<s.size();i++)
    {
        d1=abs(s[i]-a1);
        //cout << d1 <<endl;
        d2=abs(s[i]+(26-a1));
        //cout << d2 <<endl;
        d3=abs(s[i]-(26+a1));
        n+=min(d3,min(d1,d2));

        a1=s[i];
        //b1=s[i]-1;
    }
cout << n <<endl;
}
