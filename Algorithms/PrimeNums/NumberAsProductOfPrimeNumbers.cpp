#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter = 0;
    int nums = 2;
    while(n!=1) {
        if(n%nums==0) {
            counter++;
            n/=nums;
        }else {
            if(counter!=0) {
                for(int i=1; i<=counter; i++) {
                cout<<nums<<"*";
                }
            }
            counter = 0;
            nums++;
        }

    }
    for(int i=1; i<=counter; i++) {
        if(i==counter) {
            cout<<nums;
        }else {
            cout<<nums<<"*";
        }
    }
    cout<<endl;
    return 0;
}
