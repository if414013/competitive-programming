#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int data[105][105];
    int baris, kolom;
    cin>>baris>>kolom;
    int bil;
    for(int i=0 ;i<baris;i++){
        for(int j=0 ;j<kolom;j++)
            cin>>data[i][j];
    }
    int x=0;
    for(int i= kolom-1 ; i>=0 ;i--){
        for(int j=baris-1 ; j>=0 ; j--){
            if(j==0)cout<<data[j][x]<<endl;
            else cout<<data[j][x]<<" ";
        }
        x++;
    }
    return 0;
}
