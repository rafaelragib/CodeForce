#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n],a[n],total=0;
    for(int i=0;i<n;i++)
        cin >> h[i] >> a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(h[i]==a[j])
                total++;
        }
    }
    cout << total <<endl;
}
