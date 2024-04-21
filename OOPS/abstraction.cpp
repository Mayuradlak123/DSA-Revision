/*
Data abstraction refers to providing only essential information about the data
 to the outside world, hiding the background details or implementation.
 Example: We apply break and car is stop 
This type only shows the required information about the data and hides the unnecessary data.
*/
#include "bits/stdc++.h"
using namespace std;
class Abstraction
{
private:
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void Display()
    {
        printf("The value of X is :%d ",x);
        printf("\nThe value of Y is :%d ",y);
    }
};
int main (){
    Abstraction abst;
    
    abst.setData(10,20);
    abst.Display();
    return 0;
}