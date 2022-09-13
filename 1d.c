#include <stdio.h>
int main()
{
    int i,n;int a[100];
    printf("Enter size of array\n");
    scanf("%d",&n);

    printf("\nEnter elements of array  ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are: \n");
    for(i=1;i<=n;i++)
{
    printf("%d",a[i]," ");
}
    
}