#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string rest_of_str=s.substr(1);
    reverse(rest_of_str);
    cout<<s[0];
}
int main(){
    string str;
    cout<<"enter your string:";
    cin>>str;
    reverse(str);
    return 0;
}