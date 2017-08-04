#include<iostream>
using namespace std;
int main()
{
    int k,c,i=1,total;
    cin >> k >>c;
    total=k;
    while(true)
    {
        if(total%10==0 || (total%10==c))
    {

        cout <<i<<endl;
        break;
    }
    else {
        i++;
        //cout << total <<endl;
        total=k*i;

    }
    }
}
