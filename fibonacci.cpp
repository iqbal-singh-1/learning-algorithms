#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b=0;
    int c=1;
    int d=0;
    cout << "first "<<a<<" terms of fibonacci series are ";
    for(int i = 0; i<a ; i++)
    {
        cout << " " << d;
        b=d;
        d=d+c;
        c=b;
    }
}