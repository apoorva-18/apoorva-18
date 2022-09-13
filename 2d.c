 #include<stdio.h>
 int main()
 {
     int i,j, r,c, a[100][100];
     printf("Enter no.of rows:\n");
     scanf("%d",&r);
     printf("Enter no.of columns:\n");
     scanf("%d",&c);

     printf("Enter elements of array\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    }
    
    
    printf("Elements of array are\n");
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d ",a[i][j],"  ");
            printf("\n");
           
        }
    }
 }