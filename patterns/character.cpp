#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char ch = 'A';
    for(int i = 0;i<a; i++)
    {
        ch = 'A' + a - i - 1;
        for(int j = 0; j<=i ; j++)
        {
            cout << ch <<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
}
