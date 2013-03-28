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

int main()
{

int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 50, 55, 68, 99, 100, 106, 111, 206, 215 };
int start = 0;
int end = 19;

cout << binarySearch(6, a, start, end) << endl << endl;


return 0;
}