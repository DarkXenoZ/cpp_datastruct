#include"bits/stdc++.h"
void print(int a,int b)
{
    if(a<10)printf("0%d ",a);
    else printf("%d ",a);
    if(b<10)printf("0%d",b);
    else printf("%d",b);
}
int main()
{
    int h,m,x;
    scanf(" %d %d %d",&h,&m,&x);
    m+=x;
    if(m>=60)
    {
        h+=(m/60);
        m%=60;
    }
    h%=24;
    print(h,m);
}
