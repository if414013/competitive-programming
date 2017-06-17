#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
   int kata, jumlah=0;
    while(scanf("%d", &kata)!= EOF){
        jumlah += kata;
    }
    cout<<jumlah<<endl;
    return 0;
}
