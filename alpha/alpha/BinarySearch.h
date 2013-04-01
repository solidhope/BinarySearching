/*
1. get the middle element
2. if the middle element equals to the searched value, the algorithm stops;
3. otherwise, two cases are possible:
    - searched value is less, than the middle element. In this case, go to the step 1 for the part of the array, before middle element.
    - searched value is greater, than the middle element. In this case, go to the step 1 for the part of the array, after middle element.
*/

#pragma once
#ifndef alpha_BinarySearch_h
#define alpha_BinarySearch_h

#include <iostream>
using namespace std;

int binarySearch(int n, int array[], int start, int end) {
    
    int middle = (start + end) / 2;
    
    if (n == array[middle])
        
        return middle;
    
    if (start > end)
        
        return -1;
    
    if (n > array[middle])
        
        return binarySearch(n, array, middle + 1, end);
    
    else
        
        return binarySearch(n, array, start, middle - 1);
}

#endif
