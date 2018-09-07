#include"bits/stdc++.h"
using namespace std;
vector<int> v1,v2,v3;
int main()
{
int n,m;
scanf(" %d %d",&n,&m);
for(int i=0;i<n;i++){int temp;scanf(" %d",&temp);v1.push_back(temp);}
for(int i=0;i<m;i++){int temp;scanf(" %d",&temp);v2.push_back(temp);}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
int i=0,j=0;
v1.push_back(INT_MAX);
v2.push_back(INT_MAX);
while(i<n&&j<m)
    {
    if(v1[i]>v2[j])j++;
    else if(v1[i]<v2[j])i++;
    else
        {
        v3.push_back(v1[i]);
        for(int ii=i+1;ii<v1.size();ii++)if(v1[ii]!=v1[i]){i=ii;break;}
        for(int jj=j+1;jj<v2.size();jj++)if(v2[jj]!=v2[j]){j=jj;break;}
        }
    }
for(int a:v3)printf("%d ",a);
}
