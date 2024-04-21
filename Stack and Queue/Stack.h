#include "bits/stdc++.h"
using namespace std;
class Stack {
public:
    vector<int> stack;
public:
    void push(int item) {
        stack.push_back(item);
    }

    void pop() {
        if (!isEmpty()) {
            stack.pop_back();
        }
    }

    int top() {
        if (!isEmpty()) {
            return stack.back();
        }
        throw out_of_range("Stack is empty");
    }

    bool isEmpty() {
        return stack.empty();
    }

    int size() {
        return stack.size();
    }
  void traversal (){
    int i;
    for(auto x:stack){
   cout <<x<<" ";
    }
  }
  int getMiddle(){
    int n=stack.size();
   return stack[n/2];
}
};
