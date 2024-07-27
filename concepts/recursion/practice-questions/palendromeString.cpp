#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//Palendrome string
string palendrome(string s, int size,int start=0){
    
    //base case

    if(start>size){
        return "palendrome";
    }
    
    if(s[start]!=s[size-1]){
        return "Not a palendrome";
    }

    //recursive call

    return palendrome(s,size-1,start+1);
    
}
int main(){

    string s;
    cout<< "Enter a string"<<endl;
    cin>>s;
    int size = s.length();
    string ans = palendrome(s,size);
    cout<<ans;
}