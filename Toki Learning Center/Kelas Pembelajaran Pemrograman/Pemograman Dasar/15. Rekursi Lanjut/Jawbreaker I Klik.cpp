#include<bits/stdc++.h>

using namespace std;
int data[1005][1005] = {{0}};
int hitung = 0;
int cari;
int a, b;
int kolom, baris;
void traverse(int x, int y)
{
    //cout<<x<<" "<<y<<endl;
    if(y > kolom-1 || y<0 )return;
    if(x > baris-1 || x<0 )return;
    if(data[x][y]!=cari) return;
    if(data[x][y]==cari)
    {
        hitung++;
        data[x][y] = -1;
        traverse(x,y-1);
        traverse(x,y+1);
        traverse(x-1, y);
        traverse(x+1, y);
    }

}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin>>baris>>kolom;
    for(int i=0 ; i<baris ; i++)
        for(int j =0 ; j< kolom ; j++)
            cin>>data[i][j];

    cin>>a>>b;
    cari = data[a][b];
    traverse(a,b);
    cout<<hitung*(hitung-1)<<endl;
    return 0;
}
