#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  return v.back();
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  if(!v.empty())v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  if(depth>v.size())depth=v.size();
  v.insert(v.begin()+(v.size()-depth),element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  for(auto it : w)v.push_back(it);
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  while(v.back()!=e&&(!v.empty()))
  {
      v.pop_back();
  }
}

#endif
