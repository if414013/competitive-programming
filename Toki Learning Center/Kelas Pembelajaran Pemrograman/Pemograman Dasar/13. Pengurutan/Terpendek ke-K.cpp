#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vi;
    int n, cari, bil;
    cin>>n>>cari;
    while(n--){
        cin>>bil;
        vi.push_back(bil);
    }
    sort(vi.begin(), vi.end());
    cout<<vi[cari-1]<<endl;
    return 0;
}
