#include<iostream>
using namespace std;
// By Recursion
void desc(int n){
    if(n==0){
        return ;
    }
    
    desc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    // Another way by loop
    for(int i=1;i<n;i++){
        cout<<i<<endl;
    }
    cout<<endl;

    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
    //desc(n);     //function call
    return 0;


}