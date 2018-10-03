void replace(const T& x, list<T>& y) {
  //write your code here
  list<T> temp;
  for(list_iterator it=begin();it!=end();it++){
    if((*it)!=x)temp.push_back(*it);
    else{
        for(list_iterator it2=y.begin();it2!=y.end();it2++)temp.push_back(*it2);
    }
  }
  *this=temp;
}
