#include<iostream>
#include<string>
using namespace std;

int main(){
    string s; short c =0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(!(s[i]==s[s.size()-i-1])){
            c=1;
            break;
        }
    }
    if(c==1) cout << "It is a palindrom" << endl;
    else cout << "No, it is not a palindrom" << endl;
}