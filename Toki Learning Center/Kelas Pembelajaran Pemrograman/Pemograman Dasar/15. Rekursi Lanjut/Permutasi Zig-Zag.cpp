#include<bits/stdc++.h>

using namespace std;

int passwd[1000];
bool cek[11] = { false };
vector<string> vs;
void permutate(int dalam, int digit)
{
    if(dalam>digit)
    {
        bool flag =true;
        if(digit>2)
        {
            for(int i=2; i<digit && flag; i++)
            {
                if(!((passwd[i]>passwd[i-1] && passwd[i]>passwd[i+1])||(passwd[i]<passwd[i-1] && passwd[i]<passwd[i+1])))
                {
                    flag = false;
                }
            }
        }
        for(int i=1; i<=digit && flag; i++)
        {
            printf("%d",passwd[i]);
        }
        if(flag)
            printf("\n");
    }
    else
    {
        for(int i=1 ; i<=digit ; i++)
        {
            if(!cek[i])
            {
                passwd[dalam] = i;
                cek[i] = true;
                permutate(dalam + 1, digit);
                cek[i] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    permutate(1,n);
    return 0;
}
