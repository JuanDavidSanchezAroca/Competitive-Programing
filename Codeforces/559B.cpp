/*
* Codeforces 559B
* Equivalent Strings
*  Accepted
*/
#include <bits/stdc++.h>
using namespace std;

string verificar(string s) {
    if (s.size() % 2 == 1) return s;
    string s1 = verificar(s.substr(0, s.size()/2));
    string s2 = verificar(s.substr(s.size()/2, s.size()));
    if (s1 < s2) return s1 + s2;
    else return s2 + s1;
}

int main(){
  string cadena1,cadena2;
  cin >> cadena1 >>cadena2;
  puts((verificar(cadena1)==verificar(cadena2)) ? "YES" :"NO");
	return 0;
}