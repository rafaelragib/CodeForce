#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a1,a2,a3,a4,total=0;
    string s;
    cin >> a1 >>a2>>a3>>a4;
    cin >>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            total+=a1;
        }
        else if(s[i]=='2')
        {
            total+=a2;
        }
         else if(s[i]=='3')
        {
            total+=a3;
        }
        else {
            total+=a4;
        }


    }
    cout << total<<endl;
}
