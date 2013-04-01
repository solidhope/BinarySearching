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
