#include <iostream>
#include <string>
using namespace std;

string solve(int n){
    int num = n;
    string result = "";
    while(num>0){
        char ch = 'A' + (num - 1)%26; //Adjusting for 0-based index and getting the character at that position
        result = ch + result; //creating the result string by adding character at the front
        num = (num - 1)/26;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}