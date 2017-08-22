#include <iostream>

using namespace std;

int main()
{
    int flag = 0;

    int n, k;
    cin>>n>>k;

    for(int i=n+1; i<k; i++) {
        for(int j=2; j<i; j++) {
            if(i%j==0) {
                flag = 1;
                break;
            }else {
                flag = 0;
            }
        }
        if(flag==0) {
            cout<<i<<" ";
        }
    }

    return 0;
}
