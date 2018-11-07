#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx)
{
    T tmp = mData[idx];
    while(idx>0)
    {
        size_t p = (idx-1)/4;
        if(mLess(tmp,mData[p]))
            break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx)
{
    T tmp = mData[idx];
    size_t c,ctemp;
    while ((c = 4 * idx + 1) < mSize)
    {
        T maxv=mData[c];
        ctemp=c;
        for(size_t i=c+1; i<c+4&&i<mSize; i++){
            if(mLess(maxv,mData[i]))
            {
                maxv=mData[i];
                ctemp=i;
            }
        }
        c=ctemp;
        if ( mLess(mData[c],tmp) )break;
        mData[idx] = mData[c];
        idx = c;
    }
    mData[idx] = tmp;
}

#endif

