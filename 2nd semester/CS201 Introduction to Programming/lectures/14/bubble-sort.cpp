/* This program uses bubble sorting to sort a given array.
 * We use swap function to interchange the values by using pointers
 */
#include <iostream>
#include <stdlib.h>
using namespace std;

/* Prototye of function swap used to swap two values */
void swap(int *, int *);
int main()
{
    int x[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int i, j, tmp, swaps;
    for (i = 0; i < 10; i++)
    {
        swaps = 0;
        for (j = 0; j < 10; j++)
        {
            if (x[j] > x[j + 1]) // compare two values and interchange if needed
            {
                swaps++;
                swap(&x[j], &x[j + 1]);
            }
        }
        // display the array’s elements after each comparison
        for (j = 0; j < 10; j++)
            cout << x[j] << '\t';
        cout << endl;
        if (swaps == 0)
            break;
    }

    return 0;
}

void swap(int *x, int *y) // function using pointers to interchange the values
{
    int tmp;
    if (*x > *y)
    {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
}