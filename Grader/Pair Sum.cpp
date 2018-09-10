#include"bits/stdc++.h"
using namespace std;
int main()
{
int n,m;
scanf(" %d %d",&n,&m);
int A[n],B[m];
for(int i=0;i<n;i++)scanf(" %d",&A[i]);
for(int i=0;i<m;i++)scanf(" %d",&B[i]);
sort(A,A+n);
for(int b:B)
{
    bool chk=false;
    for(int i=0;i<n;i++)
        if(binary_search(A+(i+1),A+n,b-A[i])==true)
            {
                printf("YES\n");
                chk=true;
                break;
            }
    if(chk==false)printf("NO\n");
}
}
