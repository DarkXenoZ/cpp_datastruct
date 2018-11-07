#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result,result2;
  for(iterator it=begin();it!=end();it++){
    if((*it).first>=val)result.insert(*it);
    else result2.insert(*it);
  }
  *this=result2;
  return result;
}

#endif
