# include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        // Else the element can only be present
        // in right subarray
        else
        return binarySearch(arr, mid + 1, r, x);
    }
    // We reach here when element is not
    // present in array
    return -1;
}

int main()
{
  int number_of_elements;
  printf("\nEnter the desired number of elements in the Array: ");
 scanf("%d",&number_of_elements);
  int array[number_of_elements];
  int iter;
  /*Input has to be sorted in non decreasing order */
  printf("\n Enter the elements in Array in sorted order: ");
  for(iter = 0;iter < number_of_elements;iter++)
  {
   scanf("%d",&array[iter]);
  }
  /* Check if the input array is sorted */
  for(iter = 1;iter < number_of_elements;iter++)
    {
      if(array[iter] < array[iter - 1])
        {
          printf("Given input is not sorted\n");
          return 0;
        }
    }
  int key;
  printf("Enter the Key value to be searched in Array: ");
 scanf("%d",&key);
  /* Calling this functions searches for the key and returns its
index. It returns -1 if key is not found.*/
  int index;
  index = binarySearch(array,0,number_of_elements,key);
  if(index==-1)
    {
      printf("Element not found\n");
    }
  else
    {
      printf("Key Element is at index %d\n",index);
    }
  return 0;
}
