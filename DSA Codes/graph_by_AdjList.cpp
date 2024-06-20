#include<iostream>
#include<vector>
using namespace std;

int main(){
    int vertex,edges;
    cout<<"enter vertex:";
    cin>>vertex;
    cout<<"enter edges:";
    cin>>edges;
    vector<int>AdjList[vertex];
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    //print the list
    for(int i=0;i<vertex;i++){
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++)
        cout<<AdjList[i][j]<<" ";
        cout<<endl;
    }
    return 0;

}