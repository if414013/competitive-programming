#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vs;
    int n, idx;
    string kata;
    cin>>n;
    while(n--){
        cin>>kata;vs.push_back(kata);
        sort(vs.begin(), vs.end());
        int len = vs.size();
        for(int i=0 ;i<len;i++){
            if(vs[i]==kata){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
