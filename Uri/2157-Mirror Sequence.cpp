/*
* 2157-Mirror Sequence
* Implementation
* Accepted
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int nCasos,n1,n2;
	scanf("%d",&nCasos);

	while(nCasos--){
      scanf("%d %d",&n1,&n2);
      string cadena="";
      for(int i=n1 ; i <= n2 ; i++){
          cadena+=to_string(i);      
      }
      for(int i=cadena.size()-1; i >=0 ; i--){
      	cadena+=cadena[i];
      }

      cout << cadena << endl;
	}

	return 0;
}