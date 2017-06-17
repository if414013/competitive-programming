#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    cin>>n>>m>>p;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0 ;i<m;i++)
        for(int j=0;j<p;j++)
            cin>>b[i][j];

    //
    for(int i=0 ;i<n;i++){
        for(int j=0 ; j<p ;j++){
            int sum =0,bil;
            for(int x=0;x<m;x++){
               bil = a[i][x] * b[x][j];
               sum += bil;
            }
            c[i][j]=sum;
        }
    }
    for(int i=0 ;i<n;i++){
       for(int j=0 ;j<p ;j++){
            if(j==p-1)cout<<c[i][j]<<endl;
            else cout<<c[i][j]<<" ";
       }
    }

    return 0;
}
