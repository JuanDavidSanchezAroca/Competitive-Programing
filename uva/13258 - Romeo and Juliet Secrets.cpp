#include<bits/stdc++.h>
#define MAX_VALOR 200005
#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

vector<int> z(MAX_VALOR),A(MAX_VALOR);
int l,aT,bT;

void getZarr(string str, vector<int> &z);

void search(string text, string pattern)
{
    string concat = pattern + "$" + text;
    getZarr(concat, z);
}

void searchReverse(string text, string pattern)
{
    string concat = pattern + "$" + text;
    getZarr(concat, A);
}

void getZarr(string str, vector<int> &z)
{
    int n = str.length();
    int L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (z[k] < R-i+1)
                 z[i] = z[k];
            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                z[i] = R-L;
                R--;
            }
        }
    }
}

int contar(int b,int k){
    int c=0;
    bitset<MAX_VALOR> m;
    bitset<MAX_VALOR> p;
    m.set();
    p.set();
    int u=l-1,h=b+1;
 
    for(int i=0; i < aT; i++){
        if(z[h]!=0){
            if(i+b-1>=0 &&  i+b-1 < aT && z[h] + A[u-b+1]+k>=b && i+k < aT){
                c++;
				m[h]=0;
				if(A[u-b+1])
				p[u-b+1]=0;
            }

        }
        h++;
        u--;
    }

    u=l-1,h=b+1;
    for(int i=0; i < aT; i++){
              if(A[u]!=0){
            if( A[u]+z[h-(b-1)]+k>=b && (p[u]&&m[h-(b-1)]) && (h-(b-1) > b) ){
                    c++;
					p[u]=0;
					if(z[h-(b-1)])
					m[h-(b-1)]=0;					
            }
        }
        h++;
        u--;
    }
    return c;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    int k,casos;
    cin >> casos;
    while(casos--){
        cin>> a >> b>>k;
        if(k==b.size()){
            cout<< a.size()-b.size()+1<< "\n";
            continue;
        }
        aT=a.size();
        bT=b.size();
        l=a.size()+b.size()+1;
        search(a,b);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        searchReverse(a,b);
        cout << contar(b.size(),k)<< "\n";
    }


    return 0;
}
