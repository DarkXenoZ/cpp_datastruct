#ifndef __STUDENT_H_
#define __STUDENT_H_
#include"bits/stdc++.h"
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::set<T> s;
  int counter=0;
  for(size_t i=0;i<mSize;i++){
    if(s.find(mData[i])==s.end()){
        mData[counter++]=mData[i];
        s.insert(mData[i]);
    }
  }
  resize(counter);
}

#endif
