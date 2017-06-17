#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<string> vstr;
#define REP(i,n) for((i) = 0; (i) < (int)(n); (i)++)
#define READ_INT(data) scanf("%d",&data);
#define RESET(c,v) memset(c, v, sizeof(c))
#define pb push_back
#define mp make_pair

inline string GetString(void){
    char x[1000005];
    scanf("%s",x); string s = x;
    return s;
}

typedef unsigned long long ULL;
vstr matriks;
int matrikss[500][500];
string temp;
int R, C, v = 1, start, endsss, awal, akhir;
void refresh(){
    start = 0;endsss = v;awal  = 0;akhir = v;
}

void carilah(char kar){
     int tempA = ( endsss - ( (endsss-start) / 2) );
     int tempB = ( akhir - ( (akhir-awal) / 2) );
     int tempC = ( awal + ( (akhir-awal) / 2) );
     int tempD = ( start + ( (endsss-start) / 2) );

     if(kar == '0'){
        endsss = tempA;akhir = tempB;
     }
     else if(kar == '1'){
        endsss = tempA;awal = tempC;
     }
     else if(kar == '2'){
        start = tempD;akhir = tempB;
     }
     else if(kar == '3'){
        start = tempD;awal = tempC;
     }
}

void isi(){
    for(int j = start; j < endsss; j++)
    	for(int k = awal; k < akhir; k++)  
        	matrikss[j][k] = 1;  
}

int main(){
    int N;
    cin>>N;
    while(N--){
        temp = GetString();
        matriks.pb(temp);
    }
    matriks.push_back("END");
    scanf("%d %d",&R,&C);
    RESET(matrikss,0);
    string cada;

	while(R > v || C > v) v <<= 1;
    if(matriks[0] == "END"){
		for(int a = 0; a < R; a++){
        	for(int b = 0; b < C; b++){
            	if(b == C-1) printf("0\n");
            	else printf("0 ");
        	}
     	}
	}
    else{
		for(int a = 0; a < matriks.size(); a++){
      		refresh();
      		if(matriks[a] == "END") break;
      			for(int b = 1; b < matriks[a].size(); b++){
        			cada = matriks[a];carilah(cada[b]);
      			}
			isi();
    	}
    	for(int a = 0; a < R; a++){
        	for(int b = 0; b < C; b++){
            	if(b == C-1) printf("%d\n",matrikss[a][b]);
            	else printf("%d ",matrikss[a][b]);
        	}
     	}
	}
    return 0;
}
