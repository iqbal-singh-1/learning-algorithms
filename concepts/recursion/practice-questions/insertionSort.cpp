#include <bits/stdc++.h>
using namespace std;

//Insertion sort

void insertionSort(int *arr , int end, int start = 1){
    
    //base case 

    if(start>=end){
        return;
    }

    int j=start-1;
    int currElement = arr[start];
    while(j>=0 && arr[j]>currElement){

        arr[j+1] = arr[j];

        j--;
        
    }
    arr[j+1]=currElement;
    insertionSort(arr,end,start+1);
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
    insertionSort(arr,x);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}