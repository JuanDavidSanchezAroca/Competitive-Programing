/**
* 2017- Six Strings
* Accepted
**/


#include <bits/stdc++.h>
using namespace std;

long  editDistance(string a, string b){
  int n = min(a.size(), b.size());
  int res = 0;
  for (int i = 0; i < n; ++i)
    res += a[i] != b[i];
    res += b.size() - n + a.size() - n;
  return res;
}

int main(){
  string a,b;
  long nveces,minimo,n;
  pair<long,long> p;

    while(cin>>a){
    	scanf("%ld",&nveces);
    	minimo=1000000;
    	for(long i=1;i<=nveces; i++) {
    		cin>>b;
    		n=editDistance(a,b);
    		if(n<minimo){
    			p=make_pair(i,n);
    			minimo=n;
    		}
    	}
    	if(p.second>nveces){
    		 printf("%d\n",-1);
    	}else
    		printf("%ld\n%ld\n",p.first,p.second);
    }


	return 0;
}