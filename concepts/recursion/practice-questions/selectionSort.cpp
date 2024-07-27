#include <bits/stdc++.h>
using namespace std;

//Selection sort using recursion

void selectionSort(int *arr,int size){
    
    //base case

    if(size==0||size==1){
        return;
    }

    //processing the data to find the minimum element and swapping it with the 
    //element at the address

    int mini =arr[0] , index=0;
    for(int i = 1 ; i<size ; i++ ){
        if(mini>arr[i]){
            mini=arr[i];
            index=i;
        }
    }
    swap(arr[index],arr[0]);

    //recursive calls
    
    selectionSort(arr+1,size-1);
}

int main(){
    int x;
    cout<<"Enter number of elements"<<endl;
    cin>>x;
    cout<<"Enter elements"<<endl;
    int * arr = new int[x];
    for(int i = 0; i<x ; i++){
        cin>>(arr[i]);
    }
    selectionSort(arr,x);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}