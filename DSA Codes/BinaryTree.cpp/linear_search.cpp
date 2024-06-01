#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;

            
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter your size";
    cin >> n;
    int arr[n];
    cout<<"enter yor element";
    for (int i = 0; i < n; i++)
    { 

        cin >> arr[i];
    }
    int key;
    cout<<"enter your search key";
    cin >> key;
    int x=linearsearch(arr, n, key);
    cout<<"your value founded at index :"<<x;
    return 0;
}