#include<bits/stdc++.h>
using namespace std;

int main(){
    int m[4][4];
    for(int i=0 ;i<3 ;i++)
        for(int j=0; j<3 ;j++)
            cin>>m[i][j];
    for(int i=0 ;i<3 ;i++){
        for(int j=0; j<3 ;j++){
            if(j==2)cout<<m[j][i]<<endl;
            else cout<<m[j][i]<<" ";

        }
    }

    return 0;
}
