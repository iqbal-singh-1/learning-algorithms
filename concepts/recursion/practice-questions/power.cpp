#include <bits/stdc++.h>
using namespace std;

//Calculate x to the power of y

long long int calPower(int x, int y){
    
    //Base case

    if(y==0){
        return 1;
    }
    if(y==1){
        return x;
    }
    //recursive calls

    if(y%2==0){
        y=y/2;
        return calPower(x,y)*calPower(x,y);
    }
    else{
        y=y/2;
        return x*calPower(x,y)*calPower(x,y);
    }
}

int main(){
    int x,y;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    long long int ans=calPower(x,y);
    cout<<ans;
}