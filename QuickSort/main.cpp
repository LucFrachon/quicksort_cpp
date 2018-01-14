#include <iostream>
#include "functions.h"

using namespace std;

const int ARR_SIZE = 10;

int main()
{
    float myArray[ARR_SIZE];

    //ask for array values
    enterArray(myArray, ARR_SIZE);
    
    //print out array
    cout << "You entered the following array:\n";
    printArray(myArray, 0, ARR_SIZE);

    //call QuickSort 
    quickSort(myArray, 0, ARR_SIZE);

    //print result
    cout << "Sorted array:\n";
    printArray(myArray, 0, ARR_SIZE);

    return 0;
}
