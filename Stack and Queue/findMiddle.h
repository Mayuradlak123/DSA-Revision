#include "bits/stdc++.h"
#include "Stack.h"
using namespace std;

void pushElement(Stack stack){
    int i,n,temp;
    cout << "Enter Number of Element you want to push: "<<endl;
    cin>>n;
    cout << "Enter element for push : "<<endl;
    stack.push(n);
    stack.push(n);
    stack.push(n);
    stack.push(n);
}

int main (){
    Stack stack;
    pushElement(stack);
    int middle=stack.getMiddle();
    cout << "Middle Element Stack: "<<middle<<endl;
    return 0;
}
