#include "bits/stdc++.h"
using namespace std;
int main()
{
int n;
vector<int> newv;
cin >> n;
queue<pair<int,vector<int> > > q;
q.push(make_pair(1,newv));
while(!q.empty())
{
    int x=q.front().first;
    vector<int> v = q.front().second;
    if(x==n){
        for(int i : v){
            if(i==3)cout << "*3";
            else cout << "/2";
        }
        break;
    }
    v.push_back(3);
    q.push(make_pair(x*3,v));
    v.pop_back();
    v.push_back(2);
    q.push(make_pair(x/2,v));
    q.pop();
}
}
