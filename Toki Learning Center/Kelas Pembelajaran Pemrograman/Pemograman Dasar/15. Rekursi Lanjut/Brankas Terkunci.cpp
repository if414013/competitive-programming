#include<bits/stdc++.h>

using namespace std;

int passwd[1000];
bool cek[11] = { false };
vector<string> vs;
void permutate(int dalam, int digit, int limit)
{
    if(dalam > digit)
    {
        bool flag = true;
        if(dalam>=2)
        {
            for(int i=2 ; i<dalam ; i++)
            {
                if(passwd[i-1] > passwd[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
        {
            for(int i=1 ; i<dalam-1 ; i++)
            {
                printf("%d ", passwd[i]);
            }
            printf("%d\n", passwd[dalam-1]);
        }

    }
    else
    {
        for(int i=1 ; i<=limit ; i++)
        {
            if(!cek[i])
            {
                passwd[dalam] = i;
                cek[i] = true;
                permutate(dalam + 1, digit, limit);
                cek[i] = false;
            }
        }
    }
}

int main()
{
    int n, batas;
    cin>>batas>>n;
    permutate(1,n,batas);
    return 0;
}
