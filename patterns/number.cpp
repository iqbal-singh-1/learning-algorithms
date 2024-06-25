#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i = 1; i<=a ; i++)
    {
        int num = 0;
        for(int j = 1 ; j<= a+i-1; j++)
        {
            if(j<=a-i)
            {
                cout << " ";
            }
            else if(j<=a)
            {
                num+=1;
                cout << num;
            }
            else
            {
                num-=1;
                cout <<num;
            }
        }
        cout <<endl;
    }
}