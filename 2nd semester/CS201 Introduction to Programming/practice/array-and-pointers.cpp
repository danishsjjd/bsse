#include <iostream>
using namespace std;

int main()
{
    int y[10] /* y is constant pointer which contains the memory address of first element */ = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45};
    int *yptr = y; // assigning the start of array address to pointer

    cout << "Accessing 6th element of array as y[5] = " << y[5] << endl;
    cout << "Accessing 6th element of array as *(yptr + 5) = " << *(yptr + 5) << endl;
    cout << "Accessing 6th element of array as yptr[5] = " << yptr[5] << endl;

    (*(yptr + 5))++; // incrementing the value of 6th element of array

    cout << "Now 6th element as y[5] = " << y[5] << endl;
    cout << "Now 6th element as yptr[5] = " << yptr[5] << endl;

    int x = 10;
    int *xptr = &x;

    xptr++; // please don't do this
    // you're accessing memory that:
    // You don’t own
    // Might corrupt other data
    // Could cause a segmentation fault

    cout << "xptr after pointing to nothing: " << *xptr << endl;

    int z[10], *zptr1, *zptr2;
    zptr1 = &z[0];
    zptr2 = &z[3];
    // zptr1 - zptr2; // Compiler warning: expression result unused
    cout << " The difference = " << zptr2 - zptr1 << endl;

    char name[5] = "Amir"; // 4 characters + 1 null character

    char name2[5];
    name2[0] = 'A';
    name2[1] = 'm';
    // any character that not assigned will be assigned a null character
    name2[3] = 'i';
    name2[4] = 'r';

    cout << "name2[2] character code = " << (int)name2[2] << endl;

    // ---

    char strA[80] = "A test string";
    char strB[80];
    char *ptrA;
    char *ptrB; /* a pointer to type character */
    /* another pointer to type character */
    ptrA = strA;
    ptrB = strB; /* point ptrA at string A */
    /* point ptrB at string B */
    while (*ptrA != '\0')
    {
        *ptrB++ = *ptrA++; // copying character by character
    }
    *ptrB = '\0';

    cout << "String in strA = " << strA << endl; /* show strA on screen */
    cout << "String in strB = " << strB << endl; /* show strB on screen */
}