#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    else{
        return a < b;
    }
}
int main(){
    vector<string> vs;
    int n;cin>>n;
    string kata;
    while(n--){
        cin>>kata;
        vs.push_back(kata);
    }
    sort(vs.begin(), vs.end(), compare);
    for(int i=0 ;i<vs.size();i++){
        cout<<vs[i]<<endl;
    }

    return 0;
}
