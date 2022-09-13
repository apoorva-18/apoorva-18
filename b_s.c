# include <stdio.h>

int IterativeBinarySearch(int a[], int key, int i, int r)
{
 while (i <= r)
  {
   int m = (i+r)/2;  //find the mid element
   if (key<a[m]) 
   r=m-1;  //update right index
   else if (key>a[m])
    i=m+1;  //update the left index
   else
    return m;
  }
 //key was not found
 return -1;
}
//main function
int main ()
{
 //Input array (already sorted)
 int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int index, key;
 printf("Enter the element to search: ");
 scanf("%d",&key);
 index=IterativeBinarySearch(A, key, 0, 9);
 if(index==-1)
   printf("Search Failed");
 else
  printf("Key found at index: %d",index);
 return 0;
} 
