#include "bits/stdc++.h"
using namespace std;
// Leetcode : https://leetcode.com/problems/implement-stack-using-queues
class Stack {
private:
    queue<int> q1,q2;


public:
    // Push element x onto the stack.
    void push(int x) {
        q1.push(x);
    }

    // Removes the element on top of the stack and returns that element.
    int pop() {
        
        // Move all but the last element from q1 to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // The last element in q1 is the top element
        int top = q1.front();
        q1.pop();

        // Swap the names of q1 and q2
        swap(q1, q2);

        return top;
    }

    // Get the top element.
    int top() {
        // Move all but the last element from q1 to q2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        // The last element in q1 is the top element
        int top = q1.front();

        // Move the top element to q2
        q2.push(q1.front());
        q1.pop();

        // Swap the names of q1 and q2
        swap(q1, q2);

        return top;
    }

    // Returns whether the stack is empty.
    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top: " << stack.top() << endl;

    return 0;
}
