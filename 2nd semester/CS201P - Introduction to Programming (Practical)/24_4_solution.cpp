// Write a program in which you have to declare an integer array of size 10 and initializes it with numbers of your choice. Find the maximum and minimum number from the array and output the numbers on the screen.
// For finding the maximum and minimum numbers from the array you need to declare two functions findMax and findMin which accept an array and size of array (an int variable) as arguments and find the max min numbers, and return those values.

#include <iostream>

int findMax(int[], int);
int findMin(int[], int);

int main()
{

    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int mySecondArray[] = {1};

    std::cout << "Finding max & min value of my array" << std::endl;

    int myArrayMaxValue = findMax(myArray, sizeof(myArray) / sizeof(myArray[0]));
    int myArrayMinValue = findMin(myArray, sizeof(myArray) / sizeof(myArray[0]));

    std::cout << "Maximum value in my array is: " << myArrayMaxValue << std::endl;
    std::cout << "Minimum value in my array is: " << myArrayMinValue << std::endl;

    return 0;
}

int findMin(int array[], int arraySize)
{
    int min = array[0];
    for (int i = 0; i < arraySize; i++)
    {
        int element = array[i];
        if (min > element)
        {
            min = element;
        }
    }

    return min;
}

int findMax(int array[], int arraySize)
{
    int max = array[0];
    for (int i = 0; i < arraySize; i++)
    {
        int element = array[i];
        if (max < element)
        {
            max = element;
        }
    }

    return max;
}