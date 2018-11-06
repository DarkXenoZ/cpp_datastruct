#include"stdio.h"
#include"vector"
using namespace std;
vector<int> crashcheck(int a,int b,vector<int> &v)
{
    if(a!=-1&&b!=v.size()+1&&v[a]==v[b]&&(v[a]==v[a-1]||v[b]==v[b+1]))
    {
        int anext,bnext;
        for(int i=a; i>=0; i--)
            if(i==0||v[i]!=v[i-1])
            {
                anext=i-1;
                break;
            }
        for(int i=b; i<=v.size(); i++)
            if(i==v.size()||v[i]!=v[i+1])
            {
                bnext=i+1;
                break;
            }
        return crashcheck(anext,bnext,v);
    }
    else
    {
        vector<int> vret;
        for(int i=0; i<=a; i++)
            vret.push_back(v[i]);
        for(int i=b; i<v.size(); i++)
            vret.push_back(v[i]);
        return vret;
    }
}
int main()
{
    int no,po,ty,inp;
    vector<int> vin,vout;
    scanf(" %d %d %d",&no,&po,&ty);
    for(int i=0; i<no; i++)
    {
        if(i==po)
            vin.push_back(ty);
        scanf(" %d",&inp);
        vin.push_back(inp);
    }
    if(vin[po]==vin[po-1])
        vout=crashcheck(po,po-1,vin);
    else if(vin[po]==vin[po+1])
        vout=crashcheck(po,po+1,vin);
    else
        vout=vin;
    for(auto it:vout)
        printf("%d ",it);
}
