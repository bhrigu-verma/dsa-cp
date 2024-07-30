#include <iostream>

// Function prototypes
void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
void swapByPointer(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;

    std::cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapByValue(num1, num2);
    std::cout << "After swapByValue: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapByReference(num1, num2);
    std::cout << "After swapByReference: num1 = " << num1 << ", num2 = " << num2 << std::endl;


    swapByPointer(&num1, &num2);
    std::cout << "After swapByPointer: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swapByValue: a = " << a << ", b = " << b << std::endl;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swapByReference: a = " << a << ", b = " << b << std::endl;
}
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "Inside swapByPointer: *a = " << *a << ", *b = " << *b << std::endl;
}