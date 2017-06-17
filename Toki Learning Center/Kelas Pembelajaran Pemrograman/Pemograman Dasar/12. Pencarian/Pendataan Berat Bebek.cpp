#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> vi;
    long long n, bil, q, x, y;
    cin>>n;
    while(n--)
    {
        cin>>bil;
        vi.push_back(bil);
    }
    cin>>q;
    int len = vi.size();
    while(q--)
    {
        cin>>x>>y;
        int kiri=0, kanan=len-1, tengah;
        bool flag = false;
        while((kiri<=kanan)&& flag== false)
        {
            tengah = (kiri+kanan)/2;
            if(vi[tengah]<=x){
                kiri = tengah+1;
            }
            else if(vi[kiri]<=x){
                kiri++;
            }
            if(vi[tengah]>y){
                kanan = tengah-1;
            }
            else if(vi[kanan]>y){
                kanan--;
            }
            if(vi[kiri]>x && vi[kanan]<=y){
                flag=true;
            }
        }
        if(kanan-kiri>=0)
        {
            cout<<(kanan-kiri)+1<<endl;
        }
        else cout<<0<<endl;

    }

    return 0;
}
