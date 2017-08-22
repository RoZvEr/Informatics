#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int maxn = 1005;
    vector<int> adj[maxn];

    int n = 12;
    int s = 0;

    bool used[maxn];
    for(int i=0; i < maxn; i++) {
        used[i] = false;
    }

    int frontier[maxn];
    int frontierEnd=0;

    frontier[frontierEnd] = s;
    frontierEnd++;
    used[s] = true;

    for(int i=0; i < frontierEnd; i++) {
        int currentVert = frontier[i];
        for(int j = 0; j < adj[currentVert].size(); j++) {
            int neighbor = adj[currentVert][j];
            if(!used[neighbor]) {
                frontier[frontierEnd] = neighbor;
                frontierEnd++;
                used[neighbor] = true;
            }
        }
    }

    return 0;
}
