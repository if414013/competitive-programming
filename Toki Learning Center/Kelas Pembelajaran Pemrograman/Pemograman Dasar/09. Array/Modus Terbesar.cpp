#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int  data [1005] = {0};
    int n, bil;
    cin>>n;
    while(n--){
       cin>>bil;
       data[bil]++;
    }
    int maks = 0;
    int idx =0;
    for(int i=0 ;i<1005;i++){
        if(data[i] >= maks){
            maks = data[i];
            if(i > idx){
                idx =  i;
             }
        }
    }
    cout<<idx<<endl;
    return 0;
}
