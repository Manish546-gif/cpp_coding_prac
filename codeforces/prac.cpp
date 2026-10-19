#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int graph[100][100];

    cout << "Enter adjacency matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    int visited[100] = {0};

    visited[0] = 1;

    int edges = 0;
    int total = 0;

    while(edges < n-1){
        int min = INT_MAX;
        int u = -1;
        int v = -1;

        for(int i = 0; i< n; i++){
            if(visited[i] == 1){
                for(int j = 0; j <n ;j++){
                    if(visited[j] == 0 && graph[i][j] != 0){
                        if(graph[i][j] < min){
                            min = graph[i][j];
                            u = i; 
                            v = j;
                        }
                    }
                }
            }
        }
        visited[v]= 1;
        cout<<u << " - "<<u<<" = "<< min<<endl;
        total = total+min;
        edges++;
    }
    cout << "Minimum Cost = " << total;

    return 0;
}