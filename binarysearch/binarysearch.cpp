#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cout << "enter no of elements"<<endl;                   //asking user how many elements they want to enter
    cin >> x;
    vector<int> arr;
    int a;
    cout << "Enter the elements in asc order"<<endl;
    for(int i = 0 ; i< x ; i++)                             //taking user input
    {
        cin >>a;
        arr.push_back(a);                                   //storing user input in vector or dynamic array    
    }
    int start=0 , end = arr.size()-1,mid=(start+end)/2;;    //intializing variables
    int key;
    cout<< "enter value to be searched"<<endl;
    cin >> key;
    int b=1;
    while(start<end)                                        //starting while loop for start<end iterations
    {
        if(arr[mid]==key)                                   //comparing the element with the mid element
        {
            b=0;
            cout<<"Index is "<<mid;                         //returning the index if the value is matched
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;                                    //updating start if the element is lesser greater than the mid element
        }
        else if(arr[mid]>key)
        {
            end=mid-1;                                      //updating end if the element is less than the mid element
        }
        mid=(start+end)/2;                                  //updating mid after each iteration
    }
    if(b)                                                   //returning element not found if the element is not reached
    {
        cout<<"Element not found!!!";
    }
}
