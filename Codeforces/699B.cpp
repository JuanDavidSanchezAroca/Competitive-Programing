/**
*  Codeforces  699B 
*  One Bomb
*  Accepted
*/

#include <bits/stdc++.h>
using namespace std;

#define MAX_VALOR 1001

int main(){
  long x,y,contador=0;
  char c;
  char matriz[MAX_VALOR][MAX_VALOR];
  char cadena [MAX_VALOR];


  scanf("%ld %ld",&x,&y);
  vector<long > ejex(x);
  vector<long> ejey(y);

  for (long i=0; i < x ; i++){
       scanf("%s",&cadena);
  	for(long j=0; j < y ; j++){
      matriz[i][j]=cadena[j];
       if(cadena[j]=='*'){
         ejey[j]++;
         ejex[i]++;
         contador++;
       }
  	}
  }

  long cont;
  for(long i=0; i < x; i++){
    for (long j=0; j < y ; j++){
      cont=ejex[i]+ejey[j];
      if(matriz[i][j]=='*')cont--;
      if(cont==contador){
        cout << "YES\n" << i+1<< " "<<j+1 << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;


	return 0;
}