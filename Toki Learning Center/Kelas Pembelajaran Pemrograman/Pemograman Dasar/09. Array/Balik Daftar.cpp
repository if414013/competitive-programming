#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    vector<int> vi;
    int n;
    while(scanf("%d", &n) != EOF){
        vi.push_back(n);
    }
    for(int i=vi.size()-1;i>=0;i--)
        cout<<vi[i]<<endl;
    return 0;
}
