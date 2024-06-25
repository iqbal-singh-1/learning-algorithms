#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i = 1; i<=a ; i++)
    {
        int space = a - i;
        for(int j = 1; j<=a;j++)
        {
            if(j<=space)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout <<endl;
    }
}