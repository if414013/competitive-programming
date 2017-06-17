#include <bits/stdc++.h>
using namespace std;
int data[1024][1024],hitung;
string hasil[1000000];

void quadtree(int x1,int y1,int x2,int y2,int t,string prefix,string baru)
{
    prefix=prefix+baru;
    int q;
    q=data[x1][y1];
    bool check;
    check=false;
    for (int i=x1; i <= x2; i++)
    {
        for (int j=y1; j <= y2; j++)
        {
            if (data[i][j]!=q)
            {
                check=true;
                break;
            }
        }
    }
    if (check==true)
    {
        t=t/2;
        quadtree(x1,y1,x2-t,y2-t,t,prefix,"0");
        quadtree(x1,y2-t+1,x2-t,y2,t,prefix,"1");
        quadtree(x2-t+1,y1,x2,y2-t,t,prefix,"2");
        quadtree(x2-t+1,y2-t+1,x2,y2,t,prefix,"3");
    }
    else
    {
        if(q==1)
        {
            hitung++;
            hasil[hitung]=prefix;
        }
    }
}

int main()
{
    int x,y,sisi;
    cin>>x>>y;
    hitung=0;
    for (int i=1; i <= x; i++)
        for (int j=1; j <= y; j++)
            cin>>data[i][j];
    int p=1;

    if (x > y)
        sisi=x;
    else
        sisi=y;
    while (p < sisi)
        p=p*2;
    x=p;
    y=p;
    quadtree(1,1,x,y,p,"1","");
    cout<<hitung<<endl;
    for (int y=1; y <= hitung; y++)
    {
        cout<<hasil[y]<<endl;
    }
    return 0;
}
