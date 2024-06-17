#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "enter no of elements"<<endl;
    cin >> x;
    vector<int> v;
    int a;
    cout << "Enter the elements in asc order"<<endl;
    for(int i = 0 ; i< x ; i++)
    {
        cin >>a;
        v.push_back(a);
    }
    int start=0 , end = x-1,mid = 0;
    int key;
    cout<< "enter value to be searched"<<endl;
    cin >> key;
    int b=1;
    while(v[start]<v[end])
    {
        mid=(start+end)/2;
        if(v[mid]==key)
        {
            b=0;
            cout<<"Index is "<<mid;
            break;
        }
        else if(v[mid]<key)
        {
            start=mid+1;
        }
        else if(v[mid]>key)
        {
            end=mid-1;
        }
    }
    if(b)
    {
        cout<<"Element not found!!!";
    }
}
