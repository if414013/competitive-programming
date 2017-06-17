#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int n, bil,jum=0;
    cin>>n;
    while(n--){
        cin>>bil;
        jum += bil;
    }
    cout<<jum<<endl;
    return 0;
}
