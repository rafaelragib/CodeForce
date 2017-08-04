#include<iostream>
using namespace std;
int main()
{
    int n,an=0,da=0;
    cin >>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin >> ch[i];
        if(ch[i]=='A')
            an++;
        else da++;
    }
    if(an>da)
        cout << "Anton" <<endl;
    else if(da>an)
        cout <<"Danik" <<endl;
    else cout << "Friendship" <<endl;
}
