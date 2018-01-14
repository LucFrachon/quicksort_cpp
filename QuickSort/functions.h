#pragma once
#include <iostream>
#include <assert.h>
#include <cmath>
#include <time.h>
#include <algorithm>

void enterArray(float myArray[], const int arrSize);
//Precondition: myArray is an empty array of size arrSize
//Postconditiom: myArray contains arrSize values entered by the user

void printArray(float myArray[], const int start, const int end);
//Precondition: myArray is an array of floats. start and end are the postions between which we want to show the elements.
//Postcondition: myArray's elements from start to end - 1 are displayed on screen in a formatted way

void quickSort(float myArray[], const int start, const int end);
//Precondition: myArray is an array of floats of size arrSize
//Postcondition: myArray is sorted using the Quick Sort algorithm

void swapElements(float myArray[], const int position1, const int position2);
//Precondition: myArray is an array of floats
//Postcondition: myArray's elements in positions 1 and 2 have been swapped

void partition(float myArray[], const int start, const int end, int& pivotIndex);
//Precondition: myArray is an array of floats of size arrSize. pivotIndex is one of the indices of the array.
//Postcondition: The value represented by the initial pivotIndex has been moved to its rightful place in the array
//  if it was sorted in ascending order. pivotIndex is updated to this new position.