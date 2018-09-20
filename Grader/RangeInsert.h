#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last)
{
    std::vector<T> insertVector(first,last),temporaryVector(position,end());
    resize(position-begin());
    for(auto obj : insertVector)push_back(obj);
    for(auto obj : temporaryVector)push_back(obj);
    //write your code here
}

#endif
