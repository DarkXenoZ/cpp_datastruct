#include"bits/stdc++.h"
using namespace std;
map<string,int> M;
vector<string> V;
bool cmp(string a,string b){
    if(M[a]==M[b])return a>b;
    return M[a]>M[b];
}
int main()
{
int n;
scanf(" %d",&n);
for(int i=0;i<n;i++){
    string inp;
    cin >> inp;
    if(M[inp]==0)V.push_back(inp);
    M[inp]++;
}
sort(V.begin(),V.end(),cmp);
cout << V[0] << ' ' << M[V[0]];
}
