#include <stdio.h>

// Example functions
void greet() { printf("Hello from greet()!\n"); }
void farewell() { printf("Goodbye from farewell()!\n"); }

int main() {
    void (*funcPtr)(); // Function pointer declaration

    funcPtr = greet;
    funcPtr(); // Call greet()

    funcPtr = farewell;
    funcPtr(); // Call farewell()

    return 0;
}
