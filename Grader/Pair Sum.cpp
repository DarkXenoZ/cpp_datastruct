#include"bits/stdc++.h"
using namespace std;
int num[100100];
int main()
{
int n,m;
scanf(" %d %d",&n,&m);
for(int i=0;i<n;i++)scanf(" %d",&num[i]);
sort(num,num+n);
for(int i=0;i<m;i++)
    {
    int key;
    scanf(" %d",&key);
    bool found=false;
    for(int j=0;j<n;j++)
        {
        int rem=key-num[j];
        if(rem<0) break;
        int low=0,high=n-1,mid;
        while(low<=high)
            {
            mid=(low+high)/2;
            if (rem>num[mid])low=mid+1;
            else if (rem<num[mid]) high=mid-1;
            else
                {
                found=true;
                printf("YES\n");
                break;
                }
            }
        if (found==true) break;
        }
    if(found==false) printf("NO\n");
    }
}
