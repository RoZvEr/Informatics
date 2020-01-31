#include <iostream>

using namespace std;

# define V 5

bool isSafe(int v, bool graph[V][V], int *path, int pos) {
    if(graph[path[pos-1]][v]==0) {
        return false;
    }

    for(int i=0; i<pos; i++) {
        if(path[i]==v) {
            return false;
        }
    }

    return true;
}

bool hamiltonianCycleRecursive(bool graph[V][V], int *path, int pos) {
    if(pos==V) {
        if(graph[path[pos-1]][path[0]]==1) {
            return true;
        }else {
            return false;
        }
    }

    for(int i=1; i<V; i++) {
        if(isSafe(i, graph, path, pos)) {
            path[pos] = i;
            if(hamiltonianCycleRecursive(graph, path, pos+1)) {
                return true;
            }
            path[pos] = -1;
        }
    }

    return false;
}

void printSolution(int *path) {
    for(int i=0; i<V; i++) {
        cout<<path[i]<<" ";
    }
    cout<<path[0]<<endl;
}

bool hamiltonianCycleExists(bool graph[V][V]) {
    int *path = new int[V];

    for(int i=0; i<V; i++) {
        path[i] = -1;
    }

    path[0] = 0;
    if(hamiltonianCycleRecursive(graph, path, 1)) {
        cout<<"Solutions exists:"<<endl;
        cout<<"Printing example solution..."<<endl;
        printSolution(path);
        return true;
    }

    cout<<"Solution does not exist"<<endl;
    return false;
}

int main()
{
    bool graph1[V][V] = {{0, 1, 0, 1, 0},
                        {1, 0, 1, 1, 1},
                        {0, 1, 0, 0, 1},
                        {1, 1, 0, 0, 1},
                        {0, 1, 1, 1, 0}};

    bool graph2[V][V] = {{0, 1, 0, 1, 0},
                         {1, 0, 1, 1, 1},
                         {0, 1, 0, 0, 1},
                         {1, 1, 0, 0, 0},
                         {0, 1, 1, 0, 0}};

    hamiltonianCycleExists(graph1);
    hamiltonianCycleExists(graph2);

    return 0;
}
