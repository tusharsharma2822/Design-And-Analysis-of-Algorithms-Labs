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

    int size;
    printf("Enter the size of the array: "); 
    scanf("%d", &size);
    int myArray[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) 
    { 
        printf("Element %d: ", i + 1); 
        scanf("%d", &myArray[i]);
    }
    
    int targetElement;
    printf("Enter the target element to search: "); 
    scanf("%d", &targetElement);

    int result = recursiveBinarySearch(myArray, targetElement, 0, size);
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
