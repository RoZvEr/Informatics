#include <iostream>

using namespace std;


void permutation(int n, int k, bool *used, int *ans) {
    if(k>=n) {
        for(int j=0; j<n; j++) {
            cout<<ans[j]+1<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<n; i++) {
        if(!used[i]) {
            used[i] = true;
            ans[k] = i;
            permutation(n, k+1, used, ans);
            used[i] = false;
        }

    }
}

int main()
{
    int n;
    cin>>n;

    bool used[n];
    int ans[n];

    permutation(n, 0, used, ans);

    return 0;
}
