#include <bits/stdc++.h>
using namespace std;

unordered_set< int > r;

void solve(string s){
    int i,tam=s.size(),numero,aux=0,aux2=0;
	for(i=0 ; i < tam ; i++){
          numero=s[i]-'a'+1;
          if(numero != aux2){
            aux=numero;
            aux2=numero;
          }else{
            aux+=numero;
          }
       r.insert(aux);   
	}
}


int main(){
	string s;
	int nCasos,numero;
    cin >> s >> nCasos;
    solve(s);
    while(nCasos--){
    	cin >> numero;
    	puts(r.count(numero) ? "Yes":"No");
    }
	return 0;
}