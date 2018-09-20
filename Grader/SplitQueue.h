#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    int n=size();
    for(int i=0,c=0;i<n;i++){
        qs[c].push(front());
        pop();
        c=(c+1)%k;
    }
    return qs;
}

#endif

