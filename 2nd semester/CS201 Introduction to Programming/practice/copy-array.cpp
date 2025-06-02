#include <iostream>

// The type could be: it will never throw an error because an array variable is just a pointer to its first element
// void copyArray(int source[], int destination[], int size)
void copyArray(int *source, int *destination, int size)
{
    for (int i = 0; i < size; ++i)
    {
        destination[i] = source[i];
    }
}

int main()
{
    const int size = 5;
    int source[size] = {1, 2, 3, 4, 5};
    int destination[size];

    copyArray(source, destination, size);

    // int *source2 = &source[0];
    // int *destination2;
    // // Which mean we can pass an integer pointer to the function??
    // // of course, it will be an runtime error
    // copyArray(source2, destination2, 1);
    // std::cout << "Destination int: " << &destination2 << std::endl;

    std::cout << "Destination array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << destination[i] << " ";
    }

    int source3[5] = {1, 2, 3, 4, 5};
    int destination3[5];

    std::copy(source3, source3 + 5, destination3);

    std::cout << std::endl
              << "Destination array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << destination3[i] << " ";
    }
    return 0;
}
