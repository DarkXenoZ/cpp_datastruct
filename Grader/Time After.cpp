#include"bits/stdc++.h"
void print(int a,int b)
{
    if(a<10)
        printf("0%d ",a);
    else
        printf("%d ",a);
    if(b<10)
        printf("0%d",b);
    else
        printf("%d",b);
}
int main()
{
    int h,m,x;
    scanf(" %d %d",&h,&m);
    scanf(" %d",&x);
    if(x+m>=60)
    {
        h+=(((x-60+m)/60)+1);
        m=(x-60+m)%60;
    }
    else m+=x;
    if(h>23)
        h-=24;
    print(h,m);
}
