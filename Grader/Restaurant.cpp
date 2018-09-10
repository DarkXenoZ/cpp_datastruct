#include"bits/stdc++.h"
using namespace std;
class cmp
{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.first>n2.first;
    }
};
int timeinfo[1000100];
vector<int> V;
int main()
{
int n,m,mo;
scanf(" %d %d",&n,&mo);
if(mo>n){
m=mo-n;
for(int i=0;i<n;i++)scanf(" %d",&timeinfo[i]);
int low=0,high=10000000,mid,minv=INT_MAX;
while(low<=high)
    {
    mid=(low+high)/2;
    int sum=0;
    for(int i=0;i<n;i++)sum+=(mid/timeinfo[i]);
    if(sum>=m)
        {
        if(mid<minv)minv=mid;
        high=mid-1;
        }
    else low=mid+1;
    }
priority_queue<pair<int,int>,vector<pair<int,int> >,cmp> pq;
for(int i=0;i<n;i++)pq.push(make_pair(0,i));
int cnt=0;
while(cnt<mo)
    {
    pair<int,int> p = pq.top();
    printf("%d\n",p.first);
    pq.pop();
    pq.push(make_pair(p.first+timeinfo[p.second],p.second));
    cnt++;
    }
}
else for(int i=0;i<mo;i++)printf("0\n");
}
