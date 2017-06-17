#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
   int n, p;
   cin>>n>>p;
   for(int i= 1;i<=n;i++){
    if(i==n){
        if(i%p==0)cout<<"*"<<endl;
        else cout<<i<<endl;
    }
    else{
         if(i%p==0)cout<<"* ";
         else cout<<i<<" ";
    }

   }
    return 0;
}
