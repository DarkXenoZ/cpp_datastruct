#include"bits/stdc++.h"
using namespace std;
int dig(int v,int d)
{
for(int i=0;i<d;i++)v/=10;
return v%10;
}
void radixSort(vector<int> &data)
{
int d=0,n=data.size();
for(int i : data)if(ceil(log10(i))>d)d=ceil(log10(i));
queue<int> q[10];
for(int k=0;k<d;k++){
    for(int i=0;i<n;i++)
        q[dig(data[i],k)].push(data[i]);
    for(int i=0,j=0;i<10;i++)
        while(!q[i].empty()){
            data[j++]=q[i].front();
            q[i].pop();
    }
}
}
int main()
{
    vector<int> v;
    srand(time(NULL));
    for(int i=0;i<20;i++)v.push_back(rand()%10000);
    radixSort(v);
    for(int i=0;i<20;i++)cout << v[i] << '\n';
}
