#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void addEdge(vector<int> *graph, int firstEdge, int secondEdge) {
    graph[firstEdge].push_back(secondEdge);
}

void DFSRecursive(vector<int> *graph, int startingNode, bool *used) {
    vector<int>::iterator it;
    used[startingNode] = true;

    cout<<startingNode<<" ";

    for(it=graph[startingNode].begin(); it<graph[startingNode].end(); it++) {
        if(!used[*it]) {
            DFSRecursive(graph, *it, used);
        }
    }
}

void DFS(vector<int> *graph, int n, int startingNode) {
    bool used[n];

    cout<<"Starting DFS from node "<<startingNode<<": "<<endl;
    DFSRecursive(graph, startingNode, used);
    cout<<endl;
}

int main()
{
    int n, fromEdge, toEdge, startingNode, numEdges;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;

    vector<int> graph[n];

    cout<<"Enter number of edges: "<<endl;
    cin>>numEdges;

    cout<<"Enter "<<numEdges<<" pairs of numbers, indicating the nodes of the corresponding oriented edge"<<endl;
    for(int i=0; i<numEdges; i++) {
        cin>>fromEdge>>toEdge;
        addEdge(graph, fromEdge, toEdge);
    }

    cout<<"Enter starting node: "<<endl;
    cin>>startingNode;

    DFS(graph, n, startingNode);

    return 0;
}
