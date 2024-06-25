#include <iostream>
#include <vector>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *b = *a;
    *a = temp;
}
void printarr(vector<int>& arr,int size)
{
    for( int  i= 0; i<size ; i++)
    {
        cout <<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int x;
    cout << "enter no of elements"<<endl;                   //asking user how many elements they want to enter
    cin >> x;
    vector<int> arr;
    int a;
    cout << "enter elements"<<endl;
    for(int i = 0 ; i<x ; i++) //user input
    {
        cin >> a;
        arr.push_back(a);
    }
    
    for(int i = 0 ; i<arr.size()-1; i++) //iterating through each element in array
    {
        int mini = arr[i] , index = i;
        for(int j = i+1; j<arr.size() ; j++) //iterating from i+1 till last element
        {
            if(mini>arr[j]) //find minimum element
            {
                index=j;
                mini=arr[j];
            }
        }
        swap(arr[index],arr[i]); //swapping current element and minimum element
    }
    printarr(arr,arr.size());
}
