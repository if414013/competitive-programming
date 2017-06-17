#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, bil, minim = 10000000;
    vector<int> vi;
    cin>>n>>x;
    while(n--){
        cin>>bil;
        vi.push_back(bil);
    }
    int idx;
    sort(vi.begin(),vi.end());
    for(int i=0 ;i<vi.size();i++){
        if(abs(vi[i]-x)<minim){
            minim = abs(vi[i]-x);
            idx = i;
        }
    }
    cout<<vi[idx]<<endl;
    return 0;
}
