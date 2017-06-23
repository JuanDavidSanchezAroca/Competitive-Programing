#include <bits/stdc++.h>
using namespace std;

bool solve (string s){
   int j=0;
   string r="hackerrank";
  int i,tam=s.size();
   for(i=0;i < tam ; i++){
     if(s[i]==r[j]){
     	j++;
     }
   }
  return j==r.size() ? true:false;
}


int main(){
    int nCasos;
    scanf("%d",&nCasos);
    string s;
    while(nCasos--){
       cin >> s;
       puts(solve(s) ? "YES":"NO");
    }

	return 0;
}