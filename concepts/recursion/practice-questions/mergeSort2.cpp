#include <bits/stdc++.h>
using namespace std;


//merge

void merge(int* arr,int start,int end){

    int mid = start + (end-start)/2;

    //creating a copy array and merging its both sorted halfs

    int* newArr = new int[end - start + 1];

    int index1 = start , index2 = mid+1 , i = 0;

    while(index1 <= mid && index2 <= end){
        if(arr[index1]<arr[index2]){
            newArr[i++] = arr[index1++];
        }
        else{
            newArr[i++] = arr[index2++];
        }
    }

    while(index1<=mid){
        newArr[i++]=arr[index1++];
    }

    while(index2<=end){
        newArr[i++]=arr[index2++];
    }

    //copying the data from duplicate array to orignal array

    for(int i = start; i<=end;i++){
        arr[i]=newArr[i-start];
    }

    delete[] newArr;
}

//sort

void mergeSort(int* arr,int start,int end){

    if(start>=end){
        return;
    }

    int mid = start + (end-start)/2;

    mergeSort(arr,start,mid);

    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
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
    mergeSort(arr,0,x-1);
    cout<<"Sorted array is"<<endl;
    for(int i = 0; i<x ; i++){
        cout<<(arr[i])<<" ";
    }
}