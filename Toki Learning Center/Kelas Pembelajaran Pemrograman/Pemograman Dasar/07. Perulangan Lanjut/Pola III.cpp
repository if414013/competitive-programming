#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
  int n,hit=0;
  cin>>n;
  for(int i=1 ;i<=n ;i++){
    for(int j=1 ;j<=i ;j++){
        if(hit==10)hit=0;
        cout<<hit;
        hit++;
    }
    cout<<endl;
  }
    return 0;
}
