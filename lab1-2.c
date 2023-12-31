#include <stdio.h>

int recursiveBinarySearch(int arr[], int target, int low, int high) 
{
    int mid = low + (high - low)/2;
    while(low <= high)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            return recursiveBinarySearch(arr,target,mid+1,high);
        }
        else
        {
            return recursiveBinarySearch(arr,target,low,mid-1);
        }
    }
    return -1;
}



int main() 
{

    int arraySize;
    printf("Enter the size of the array: "); 
    scanf("%d", &arraySize);
    int myArray[arraySize];
    printf("Enter %d elements for the array:\n", arraySize);
    for (int i = 0; i < arraySize; ++i) 
    { 
        printf("Element %d: ", i + 1); 
        scanf("%d", &myArray[i]);
    }
    
    int targetElement;
    printf("Enter the target element to search: "); 
    scanf("%d", &targetElement);

    int result = recursiveBinarySearch(myArray, targetElement, 0, arraySize);
    if (result != -1) 
    {
        printf("Element %d found at index %d.\n", targetElement, result);
    }
    else 
    {
        printf("Element %d not found in the array.\n", targetElement);
    }
    return 0;
}
