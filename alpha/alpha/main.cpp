#pragma once
#include <iostream>
#include "BinarySearch.h"
using namespace std;

int main()
{
    int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 50, 55, 68, 99, 100, 106, 111, 206, 215 };
    int start = 0;
    int end = 19;
    
    cout << binarySearch(6, a, start, end) << endl << endl;
    
    return 0;
}