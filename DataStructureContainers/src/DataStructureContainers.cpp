#include <iostream>
#include <queue>
#include <vector>
#include "../HeaderFiles/MyStack.h"

int main() {
    MyStack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    std::cout << "Is stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    std::vector<int> myVector = { 1, 2, 3, 4, 5 };
    std::cout << "Vector contents: ";
    for (int val : myVector) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::queue<int> myQueue;
    myQueue.push(100);
    myQueue.push(200);
    myQueue.push(300);

    std::cout << "Queue front: " << myQueue.front() << std::endl;
    myQueue.pop();
    std::cout << "Queue front after pop: " << myQueue.front() << std::endl;

    return 0;
}
