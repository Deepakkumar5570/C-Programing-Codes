#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter row number: ";
    cin >> n;
    cout << "Enter column number: ";
    cin >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 || j == 0 || i == n-1 || j == m-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl; // Move this line outside the inner loop
    }
    
    return 0;
}
