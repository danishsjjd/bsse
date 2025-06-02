#include <iostream>

int main()
{
    int x = 10;
    int y = 20;

    int *const ptr = &x; // Constant pointer to int
    // ptr is a constant pointer to an int.
    // The pointer cannot point to another variable after initialization.
    // But the value it points to can be changed.

    *ptr = 15; // ✅ OK: Can change the value pointed to
    // ptr = &y; // ❌ Error: Cannot change the pointer itself

    const int *ptr1 = &x;
    // ptr1 is a pointer to a constant int.
    // The pointer can point to another variable.
    // But the value it points to cannot be changed through the pointer.

    // *ptr1 = 15; // ❌ Error: Cannot change value through ptr
    ptr1 = &y; // ✅ OK: Can change where ptr points

    return 0;
}