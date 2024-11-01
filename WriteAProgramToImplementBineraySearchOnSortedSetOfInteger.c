#include <stdio.h>
#include <conio.h>
int n;

int main()
{
    int i,j,y,n;
    printf("Enter the number of integers : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the sorted list of Array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        
    }
    printf("Enter the number to be searched : ");
    scanf("%d", &y);
    j = binary(a, n, y);
    i = j;
    if(j == -1)
    {
        printf("Element is not found");

    }
    else{
        printf("\n %d is found at position= %d\n", y, i+1);
    }
    return 0;


    getch();
}
int binary(int a[], int n, int x)
{
    int Low = 0, High = n-1, Mid;
    while(Low <= High)
    {
        Mid = (Low + High)/2;
        if(x == a[Mid])
        {
            return(Mid);
        }
    else 
    {
        if(x < a[Mid])
        {
            High = Mid - 1;

        }
        else
        {
            Low = Mid + 1;

        }
    } 


        }
return(-1);
}
