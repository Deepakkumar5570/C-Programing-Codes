#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;
    //Approach 1
    /*if(n%2==0){
        cout<<" note prime";
    }else{
    cout<<" prime";
    }*/
    //Approach 2 
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"not a prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    return 0;
}
