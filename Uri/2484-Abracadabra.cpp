/**
* 2448 - Abracadabra
* Accepted
* Implementation (Strings)
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
   string a;  
   while(cin>>a){
      for(int j=0; j < a.size();j++){
      	 cout << string(j,' ');
   		  for(int i=0; i < a.size()-j; i++){
          if(i<a.size()-j-1)printf("%c ",a[i]);
          else
   		  printf("%c",a[i]);
   		}
   		puts("");
  	  }
  	  puts("");
   }

	return 0;
}