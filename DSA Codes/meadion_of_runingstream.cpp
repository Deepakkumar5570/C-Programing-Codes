#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector,greater<int>>pqmin;
priority_queue<int,vector>pq,max;
void insert(10){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top())
        pqmax.push(x);
        else{
            pqmin.push(x);
        }
    }
    else{
        if(pqmax.size()>pqmin.size()){
            if(x>=pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp=pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
    }
}
int main(){
    return 0;
}

