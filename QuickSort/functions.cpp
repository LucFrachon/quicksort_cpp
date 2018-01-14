#include "functions.h"


void enterArray(float myArray[], const int arrSize)
{
    std::cout << "Enter your list of numbers:\n";
    for (int i = 0; i < arrSize; ++i)
    {
        std::cin >> myArray[i];
    }
}

void printArray(float myArray[], const int start, const int end)
{
    for (int i = start; i < end; ++i)
    {
        std::cout << myArray[i] << "\t";
    }
    std::cout << std::endl;
}

void quickSort(float myArray[], const int start, const int end)
{
    int n = end - start;

    //base case:  n = 1
    if (n <= 1) return;

    //other cases:
    //choose pivot at random
    srand(time(NULL));
    int pivotIndex = start + (RAND_MAX - rand()) % (n);

    //partition array around pivot and replace pivot index with new value
    partition(myArray, start, end, pivotIndex);
    //call quickSort on left array
    quickSort(myArray, start, pivotIndex);
    //call quickSort on right array
    quickSort(myArray, pivotIndex + 1, end);

}

void swapElements(float myArray[], const int position1, const int position2)
{
    float tempValue = myArray[position1];
    myArray[position1] = myArray[position2];
    myArray[position2] = tempValue;
}

void partition(float myArray[], const int start, const int end, int& pivotIndex)
{
    int n = end - start;
    int i = start + 1;

    //if pivot is not in the first position, swap with first
    if (pivotIndex != start) swapElements(myArray, start, pivotIndex);

    float pivot = myArray[start];

    for (int j = start + 1; j < end; ++j)
    {
        if (myArray[j] < pivot)
        {
            //swap the elements in indices i and j
            swapElements(myArray, i, j);
            ++i;
        }
    }
    pivotIndex = i - 1;  //store new pivot position
    swapElements(myArray, start, i - 1);  //place pivot in its rightful position
}

