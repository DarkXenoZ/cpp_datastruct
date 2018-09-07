#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;
int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<int> operands;
  for(int i=0;i<v.size();i++){
    if(v[i].first==1)operands.push(v[i].second);
    else{
        int op1=operands.top();
        operands.pop();
        int op2=operands.top();
        operands.pop();
        if(v[i].second==0)operands.push(op2+op1);
        else if(v[i].second==1)operands.push(op2-op1);
        else if(v[i].second==2)operands.push(op2*op1);
        else operands.push(op2/op1);
    }
  }
  return operands.top();
}

#endif
