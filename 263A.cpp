#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,j,go,ix,jx;
    bool flag=false;
    int ar[5];
    for(i=0;i<5;i++){
    for(j=0;j<5;j++)
    {
       // cout << j;
     cin >>ar[j];
     if(ar[j]==1){
           ix=i;
           jx=j;
    }
    }
    }
    go=abs(jx-2)+abs(ix-2);
    cout << go;

}
