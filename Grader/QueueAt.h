#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  if(idx<0)idx=size()+idx;
  return mData[(mFront+idx)%mCap];
  //
  // you need to return something
  // return
}

#endif
