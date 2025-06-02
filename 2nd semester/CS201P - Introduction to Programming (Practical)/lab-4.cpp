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