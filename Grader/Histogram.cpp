#include"bits/stdc++.h"
using namespace std;
vector<string> V;
map<string,int> M;
int main()
{
int n;
scanf(" %d",&n);
for(int i=0;i<n;i++)
    {
    string inp;
    cin >> inp;
    if(M[inp]==0)V.push_back(inp);
    M[inp]++;
    }
sort(V.begin(),V.end());
for(auto &word : V)
    {
    if(M[word]>1){cout << word << " " << M[word] << "\n";}
    }
}
