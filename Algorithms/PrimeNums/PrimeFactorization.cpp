#include <iostream>
#include <vector>

using namespace std;

vector<int> factorization(int n) {
    int i=2;
    vector<int> factors;

    while(n!=1) {
        if(n%i==0) {
            factors.push_back(i);
            n/=i;
        }else {
            i++;
        }
    }
    return factors;
}

int main()
{
    int n;
    cin>>n;
    int i=2;
    vector<int> factors = factorization(n);

    for(int i=0; i<factors.size(); i++) {
        if(i==factors.size()-1) {
            cout<<factors[i]<<endl;
        }else {
            cout<<factors[i]<<" * ";
        }
    }

    return 0;
}
