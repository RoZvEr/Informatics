#include <iostream>
#include <string>

using namespace std;

long long convertStringToCharInt(string n, long long i) {

        if(n[i]=='0') {
            return 0;
        }else if(n[i]=='1') {
            return 1;
        }else if(n[i]=='2') {
            return 2;
        }else if(n[i]=='3') {
            return 3;
        }else if(n[i]=='4') {
            return 4;
        }else if(n[i]=='5') {
            return 5;
        }else if(n[i]=='6') {
            return 6;
        }else if(n[i]=='7') {
            return 7;
        }else if(n[i]=='8') {
            return 8;
        }else if(n[i]=='9') {
            return 9;
    }
}
long long convertStringToNumberInt(string n) {
    long long answer = 0;
    for(long long i=0; i<n.length(); i++) {
        answer+=convertStringToCharInt(n,i);
        answer*=10;
    }
    answer/=10;
    return answer;
}

int main()
{
    string n;
    cin>>n;

    cout<<convertStringToNumberInt(n);

    return 0;
}
