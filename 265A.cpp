#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >>s2;
    int j=0,count=1;
    for(int i=0;i<s2.size();i++)
    {
        if(s1[j]==s2[i])
        {
            count++;
            j++;
        }
    }
    cout << count <<endl;
}
