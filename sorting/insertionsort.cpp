#include <iostream>
#include <vector>
using namespace std;
void printarr(vector<int>& arr,int size)
{
    // function to print array 

    for( int  i= 0; i<size ; i++)
    {
        cout <<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int x;
    cout << "enter no of elements"<<endl;     //asking user how many elements they want to enter
    cin >> x;
    vector<int> arr;
    int a;
    cout << "enter elements"<<endl;
    for(int i = 0 ; i<x ; i++)
    {
         //user input

        cin >> a;
        arr.push_back(a);
    }
    for(int i = 1 ; i<x ; i++) //iterating from 2nd element to last element
    {
        int temp=arr[i];
        int j = i-1;
        for(; j>=0 ; j--) //iterating from i-1 th element to first element backwards
        {
            if(arr[j]>temp)
            {
                //if element is greater , shift the a[j] by one step

                arr[j+1]=arr[j];
            }
            else
            {
                //else break and move to next element

                break;
            }

        }
        arr[j+1]=temp;
    }
    //printing the array

    printarr(arr,arr.size());
}