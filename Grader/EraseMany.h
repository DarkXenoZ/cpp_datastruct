#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    int n=size(),c=0,k=0;
  for(int i=0;i<n;i++){
    if(pos[k]!=i||k>=pos.size()){
        mData[c++]=mData[i];
    }
    else k++;
  }
  resize(n-pos.size());
}

#endif
