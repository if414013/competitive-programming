#include<bits/stdc++.h>
using namespace std;
int data;
int fungsi(int a, int b, int x, int k){
    //cout<<x<<"  "<<k<<endl;
    if(k==0)return data;
    else {
        data = abs((a*x)+b);
        return fungsi(a, b, abs((a*x)+b), k-1);
    }
}
int main(){
    int a, b, x, k;
    cin>>a>>b>>k>>x;
    cout<<fungsi(a,b,x,k)<<endl;
    return 0;
}
