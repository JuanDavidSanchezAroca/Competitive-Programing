#include <bits/stdc++.h>
using namespace std;

int solve(string s){
  int c=0;
  int tam=s.size()/3;
  for(int i=0; i < s.size() ; i+=3){
  	if(s[i]!='S'){
  		c++;
  	}
  	if(s[i+1]!='O'){
  		c++;
  	}
  	if(s[i+2]!='S'){
  		c++;
  	}
  }
  return c;
}


int main(){
  string s;
    getline(cin,s);
    cout << solve(s) << endl;

	return 0;
}