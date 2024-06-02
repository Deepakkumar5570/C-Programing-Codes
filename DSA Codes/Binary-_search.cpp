#include<iostream>
using namespace std;
int binary_search(int arr[],int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter your array size :";
    cin>>n;
    int arr[n];
    cout<<"enter your array elemnet :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter your search key value";
    cin>>key;
    cout<<"you element present at index  "<<binary_search(arr,n,key);

return 0;
}