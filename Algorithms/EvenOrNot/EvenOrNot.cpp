#include <iostream>

using namespace std;
bool isPrime(int n) {
    int k = 0;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            k=1;
            break;
        }else{
             k=0;
        }
    }
    if(k==0) {
        return true;
    }else {
        return false;
    }
}
int main()
{
    int n;

    cin>>n;

    if(isPrime(n)) {
        cout<<"Prime"<<endl;
    }else {
        cout<<"Not Prime"<<endl;
    }

    return 0;
}
