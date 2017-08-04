#include<iostream>
#include<string>
using namespace std;

int main()
{

    int y,w,index;
    string proba[7]={"0","1/1","5/6","2/3","1/2","1/3","1/6"};
    cin >> y >>w;
    index=max(y,w);
    cout << proba[index] << endl;
}
