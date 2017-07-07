#include <bits/stdc++.h>
using namespace std;

#define MAX_VALOR 1000

void LCS(vector<string> a,vector<string> b){
  int m=a.size(),n=b.size();
  int dp[m+1][n+1];
  for(int i=0; i <= m; i++){
  	for(int j=0; j <= n; j++){
           if(i==0 || j==0){
           	dp[i][j]=0;
           }else if (a[i-1]== b[j-1]){
           	 dp[i][j]=dp[i-1][j-1]+1;
           }else{
           	dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
           }
  	   }
  }
int index=dp[m][n];
int tam=index;
string s[index+1];
int i = m, j = n;
   while (i > 0 && j > 0)
   		{
      if (a[i-1] == b[j-1])
      {
       s[index-1]=string(a[i-1]); 
      i--; j--; index--;  
      }
      else if (dp[i-1][j] > dp[i][j-1])
         i--;
      else
         j--;
   }

  for(int i=0; i < tam-1; i++) cout<< s[i]+" ";
   cout <<s[tam-1] << endl;
}

int main(){

vector <string> a;
vector <string> b;
string aux;
string fin="#";
int i =0;

   while(cin >> aux ){
       if(aux=="#"){
       	 i++;
       }
       if(i==0){
       	a.push_back(aux);
       }else{
       	b.push_back(aux);
       }

       if(i==2){
       	i=0;
       	 LCS(a,b);
       	 a.clear();
       	 b.clear();
       }
   }

   
	return 0;
}