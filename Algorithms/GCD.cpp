#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b==0) {
        return a;
    }
    gcd(b, a%b);
}

int hcf(int a, int b) {
    return (a/gcd(a, b))*b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    
    cout<<gcd(a, b)<<" "<<hcf(a, b);
    
    return 0;
}
