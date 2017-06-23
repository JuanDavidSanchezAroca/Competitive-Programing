#include <bits/stdc++.h>
using namespace std;

int solve(string s){
   int c=1;
   for(int i=0; i < s.size(); i++){
   	  if (s[i] >= 'A' && s[i] <= 'Z') c++;
   }
	return c;
}

int main(){
     string s;
     getline(cin,s);
     cout << solve(s) << endl;
	return 0;
}