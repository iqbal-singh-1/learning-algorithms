#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//Reversing an input string
string reverse(string s, int size,int start=0){
    
    //base case

    if(start>size){
        return s;
    }

    //processing

    swap(s[start],s[size-1]);

    //recursive call

    return reverse(s,size-1,start+1);
    
}
int main(){

    string s;
    cout<< "Enter a string"<<endl;
    cin>>s;
    int size = s.length();
    string ans = reverse(s,size);
    cout<<ans;
}