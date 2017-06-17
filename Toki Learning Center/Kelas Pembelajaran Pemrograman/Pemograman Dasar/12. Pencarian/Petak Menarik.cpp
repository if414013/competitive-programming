#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[105][105];
    for(int i=0 ;i<105;i++){
        for(int j=0 ;j<105;j++){
            a[i][j] = 1;
        }
    }
    int n, m, k, bil;
    cin>>n>>m>>k;
    for(int i=1 ;i<=n;i++){
        for(int j=1 ;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int baris= 1000;
    int kolom = 1000;
    bool flag = false;
    for(int i=1 ;i<=n;i++){
        for(int j=1 ;j<=m;j++){
            if((a[i][j+1]*a[i][j-1]*a[i+1][j]*a[i-1][j])==k){
                flag = true;
                if(j<kolom){
                    kolom = j;
                    baris = i;
                }
            }
        }
    }
    if(flag)cout<<baris<<" "<<kolom<<endl;
    else cout<<"0 0"<<endl;
    return 0;
}
