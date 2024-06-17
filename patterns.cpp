#include <iostream>
using namespace std;
//character pattern
// int main()
// {
//     int a;
//     cin >> a;
//     char ch = 'A';
//     for(int i = 0;i<a; i++)
//     {
//         ch = 'A' + a - i - 1;
//         for(int j = 0; j<=i ; j++)
//         {
//             cout << ch <<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

// triangle patterns
// int main()
// {
//     int a;
//     cin >> a;
//     for(int i = 1; i<=a ; i++)
//     {
//         int space = a - i;
//         for(int j = 1; j<=a;j++)
//         {
//             if(j<=space)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout <<endl;
//     }
// }


// int main()
// {
//     int a;
//     cin >> a;
//     for(int i = 1; i<=a ; i++)
//     {
//         int space = i-1;
//         for(int j = 1; j<=a;j++)
//         {
//             if(j<=space)
//             {
//                 cout << " ";
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout <<endl;
//     }
// }

//number patern
// int main()
// {
//     int a;
//     cin >> a;
//     for(int i = 1; i<=a ; i++)
//     {
//         int num = 0;
//         for(int j = 1 ; j<= a+i-1; j++)
//         {
//             if(j<=a-i)
//             {
//                 cout << " ";
//             }
//             else if(j<=a)
//             {
//                 num+=1;
//                 cout << num;
//             }
//             else
//             {
//                 num-=1;
//                 cout <<num;
//             }
//         }
//         cout <<endl;
//     }
// }

//i love u pattern
void hl(int a);
int main()
{
    int n=10;
    for(int a=1; a<=n; a++)
    {
        cout << "\t*";
        cout << "\t\t* ";
        if(a==n)
        {
            hl(5);
        }
        if(a==10)
        {
            cout << "\t";
        }
        else
        {
        cout << "\t\t";
        }
        if(a<=5)
        {
            int spaceo=5-a;
            for(int i = 0; i<=10 ; i++)
            {
                if(i==5-a || i==5+a)
                {
                    cout << "*";
                }
                else
                {
                    cout <<" ";
                }
            }
        }
        else
        {
            for(int i = 0; i<=10 ; i++)
            {
                if(i==a-6 || i==10-a+6)
                {
                    cout << "*";
                }
                else
                {
                    cout <<" ";
                }
            }
        }
        cout <<"\t";
        for(int j = 0; j<=20;j++)
        {
            if(j==a||j==20-a)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\t";
        if(a==n || a==1 || a==5)
        {
            hl(5);
        }
        else
        {
            cout << "*\t";
        }
        cout << "\t\t";
        if(a==n)
        {
            hl(9);
        }
        else
        {
            cout << "*\t\t*";
        }
        cout <<endl;
    }
}
void hl(int a)
{
    for(int b = 0 ; b<a; b++)
    {
        cout <<"* ";
    }
}