#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
list_iterator it=begin();
  while(it!=end()){
    if(*it==value){
            it.ptr->prev->next = it.ptr->next;
            it.ptr->next->prev = it.ptr->prev;
            mSize--;
            delete it.ptr;
            it++;
        }
    else it++;
  }
}

#endif
