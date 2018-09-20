#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  for(int i=mFront;i<mFront+k;i++)res.push_back(mData[i]);
  //write your code only here
  //
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
    this -> mData = new T[to-from+1];
    this -> mCap = to-from+1;
    this -> mSize = to-from;
    for (iterator it=from; it!=to;it++) {
        mData[it-from] = *it;
      }
    this -> mFront = 0;
  //write your code only here
}

#endif
