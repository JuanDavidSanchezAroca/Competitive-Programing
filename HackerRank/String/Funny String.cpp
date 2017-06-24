#include <bits/stdc++.h>
using namespace std;

bool solve(string s){

   for(int i=1; i < s.size(); i++){
   	  if(abs(s[i]-s[i-1])!=abs(s[s.size()-i-1]-s[s.size()-i]))
   	  	return false;
   }
  return true;
}

int main(){
    
    int nCasos;
    string s;
    scanf("%d",&nCasos);
  
    while(nCasos--){
     cin >> s;
     puts(solve(s) ? "Funny":"Not Funny");
    }

	return 0;
}