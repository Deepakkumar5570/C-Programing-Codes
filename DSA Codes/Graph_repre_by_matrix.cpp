#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertex, edges;
    cout << "enter number of vertex:";
    cin >> vertex;
    cout << "enter number of edges:";
    cin >> edges;
    vector<vector<bool>> AdjMat(vertex, vector<bool>(vertex, false));
    int u, v;
    for (int i = 0; i < edges; i++)
    { // where to where edges
        cin >> u >> v;
        AdjMat[u][v] = true;
        AdjMat[v][u] = true;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)  // Corrected from edges to vertex
        {
            cout << AdjMat[i][j] << " ";
        }
        cout << endl;  // Added to move to a new line after each row
    }

    return 0;
}
