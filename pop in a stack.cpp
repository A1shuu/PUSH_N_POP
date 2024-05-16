#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Creating an empty stack
    stack<int> stackData;

    // Pushing elements onto the stack
    stackData.push(10);
    stackData.push(20);
    stackData.push(30);
    stackData.push(40);

    // Popping the elements in stack
   stackData.pop();
   
   //print the remaining elements
    while (!stackData.empty()) {
        cout << stackData.top() << " ";
        stackData.pop();
    
        }
    

    return 0;
}
