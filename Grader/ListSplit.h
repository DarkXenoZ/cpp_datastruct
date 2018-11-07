#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(pos==size()){
    return result;
  }
  else{
  iterator ite = mHeader->prev;
  it.ptr->prev->next=mHeader;
  mHeader->prev=it.ptr->prev;
  result.mHeader->next = it.ptr;
  result.mHeader->prev=ite.ptr;
  it.ptr->prev = result.mHeader;
  ite.ptr->next = result.mHeader;
  result.mSize = mSize-pos;
  mSize=pos;
  return result;
  }
  }

#endif
