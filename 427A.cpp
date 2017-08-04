#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int que=0,mis=0;
    cin >> n;
    while(n!=0)
    {
    int t;
    cin >>t;
    if(t<=0 && que<=0) mis+=t;
    else if(t<=0 && que>0) que+=t;
    else que+=t;
    n--;
    }
    cout << abs(mis) <<endl;
}
