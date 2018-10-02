void replace(const T& x, list<T>& y) {
  //write your code here
  iterator it = begin();
  while(it!=end()){
    if((*it) == x){
        iterator todel = it;
        it--;
        erase(todel);
        it++;
        for(auto in : y){
            insert(it,in);
        }
        it--;
    }
    it++;
  }
}
