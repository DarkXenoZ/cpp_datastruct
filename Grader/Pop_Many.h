#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if(K>mSize)mSize=0;
  else mSize-=K;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> temp,ret;
  if(K>mSize)K=mSize;
  for(size_t i=0;i<K;i++){
    temp.push(top());
    pop();
  }
  for(size_t i=0;i<K;i++){
    ret.push(temp.top());
    temp.pop();
  }
  return ret;
}

#endif
