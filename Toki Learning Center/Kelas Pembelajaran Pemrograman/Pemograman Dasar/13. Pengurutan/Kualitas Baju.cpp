#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vi;
    int n, cari, bil;
    cin>>n;
    int t=n;
    while(t--){
        cin>>bil;
        vi.push_back(bil);
    }
    sort(vi.begin(), vi.end());
    int mid = n/2,hasil;
    if(n%2==1){
        printf("%.1f\n", (float)vi[mid]);
    }
    else{
        hasil = vi[mid-1] + vi[mid];
        printf("%.1f\n" ,(float)hasil/2);
    }
    return 0;
}
