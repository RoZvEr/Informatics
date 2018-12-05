#include <iostream>

using namespace std;

int fact(int n) {
int ans = 1;
for(int i=1; i<=n; i++) {
ans*=i;
}
return ans;
}

int main()
{
    int n;
    cin>>n;
    int answer = (fact(2*n)/(fact(n+1)*fact(n)));
    cout<<answer<<endl;
    return 0;
}
