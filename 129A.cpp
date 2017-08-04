#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
        {
            cin >>arr[i];
            sum+=arr[i];
        }
    for(int i=0;i<n;i++)
    {
        if((sum-arr[i])%2==0)
            count++;
    }
    cout <<count<<endl;
}

