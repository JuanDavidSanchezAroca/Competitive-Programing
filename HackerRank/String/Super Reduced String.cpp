#include <bits/stdc++.h>
using namespace std;

string solve(string s){
  vector< char > v;

  for(int i=0 ; i < s.size(); i++){
  	if(v.empty()){
  		v.push_back(s[i]);
  	}else{
  	   if(s[i]==v.back()){
  	   	  v.pop_back();
  	   }else{
  	   	  v.push_back(s[i]);
  	   }
  	}
  }

  if(v.empty()){
  	return "Empty String";
  }else{
    string res="";
     for(int i=0; i< v.size(); i++) res+=v[i];
    return res;
  }

}


int main(){
	string s;
    getline(cin,s);
    cout << solve(s) << endl;
	return 0;
}