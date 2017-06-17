#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    vector<int>b;
    int n, x, y,bil,q;
    char c1, c2;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>bil;
        a.push_back(bil);
    }
    for(int i=0; i<n; i++)
    {
        cin>>bil;
        b.push_back(bil);
    }
    cin>>q;
    int tmp;
    while(q--)
    {
        cin>>c1>>x>>c2>>y;
        if(c1 != c2)
        {
            if(c1=='A')
            {
                tmp = a[x-1];
                a[x-1] = b[y-1];
                b[y-1] = tmp;
            }
            else
            {
                tmp = a[y-1];
                a[y-1] = b[x-1];
                b[x-1] = tmp;
            }
        }
        else if(c1=='A' && c2=='A')
        {
            tmp = a[x-1];
            a[x-1] = a[y-1];
            a[y-1] = tmp;
        }
        else if(c1=='B' && c2=='B')
        {
            tmp = b[x-1];
            b[x-1] = b[y-1];
            b[y-1] = tmp;
        }


    }
    for(int i=0 ; i<n; i++)
    {
        if(i==n-1)cout<<a[i]<<endl;
        else cout<<a[i]<<" ";
    }
    for(int i=0 ; i<n; i++)
    {
        if(i==n-1)cout<<b[i]<<endl;
        else cout<<b[i]<<" ";
    }
    return 0;
}
