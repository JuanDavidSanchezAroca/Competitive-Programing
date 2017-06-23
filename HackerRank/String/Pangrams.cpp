#include <bits/stdc++.h>
using namespace std;

bool solve(string s){
	set<char> r;
     int tam=s.size(),i;
	for(i=0; i < tam; i++){
		if(s[i]>='a' && s[i]<='z'){
			r.insert(s[i]);
		}else if(s[i]>='A' && s[i]<='Z'){
			r.insert(tolower(s[i]));
		}
	}
    
    return r.size() == 26 ? true:false;
}

int main(){
     string s;
     getline(cin,s);

    puts(solve(s) ? "pangram":"not pangram");
	return 0;
}