#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const
{
    CP::priority_queue<T,Comp> atemp=*this,btemp=other;
    if(atemp.size()!=btemp.size())
        return false;
    else
        while(!atemp.empty())
            if(atemp.top()!=btemp.top())
                return false;
            else
            {
                atemp.pop();
                btemp.pop();
            }
    return true;
}

#endif
