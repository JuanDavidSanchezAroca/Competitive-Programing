#include <bits/stdc++.h>
using namespace std;



bool solve(string a,string b){
unordered_set <int> r;
   int numero;
	for(int i=0; i< a.size(); i++){
		numero=a[i]-'a'+1;
		r.insert(numero);
	}

	for(int i=0; i < b.size(); i++){
		numero=b[i]-'a'+1;
		if(r.count(numero)){
			return true;
		}
	}
  return false;

}

int main(){
   int nCasos;
   scanf("%d",&nCasos);
   string a,b;
   while(nCasos--){
      cin >> a >> b;
      puts(solve(a,b) ? "YES":"NO");
   }

	return 0;
}