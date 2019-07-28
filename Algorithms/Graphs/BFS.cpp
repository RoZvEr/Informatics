#include <iostream>
#include <vector>
#include <deque>

using namespace std;


int main()
{
    int n, k, temp, startingVertex;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;
    int flag = false;
    vector<int> numNodes[n];
    deque<int> frontier;

    for(int i=0; i<n; i++) {
        cout<<"How many neighbours for node "<<i<<"?"<<endl;
        cin>>k;
        cout<<"Enter neighbours"<<endl;
        for(int j=0; j<k; j++) {
            cin>>temp;
            numNodes[i].push_back(temp);
        }
    }
    cout<<"Enter starting point"<<endl;
    bool used[n];
    for(int i=0; i<n; i++) {
        used[i] = false;
    }

    cin>>startingVertex;
    cout<<"Starting BFS from vertex "<<startingVertex<<"..."<<endl;
    cout<<startingVertex<<endl;
    used[startingVertex] = true;

    frontier.push_back(startingVertex);
    while(!frontier.empty()) {
        for(i:numNodes[frontier.front()]) {
            if(!used[i]) {
                frontier.push_back(i);
                cout<<i<<" ";
                used[i] = true;
                flag = true;
            }
        }
        if(flag) {
            cout<<endl;
        }
        flag = false;
        frontier.pop_front();
    }


    return 0;
}
