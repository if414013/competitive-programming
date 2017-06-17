#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n==1)return 1;
    else{
        if(n%2==0)
            return (n/2)*fact(n-1);
        else
            return n * fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
