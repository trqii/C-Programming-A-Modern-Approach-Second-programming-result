#include <stdio.h>

void selection_sort(int a[], int n)
{
    if (n <= 1) 
	{
        return;
    }

    int t;
    
    for (int i = n - 2; i >= 0; i--) 
	{
        if (a[n - 1] < a[i]) 
		{
            t = a[n - 1];
            a[n - 1] = a[i];
            a[i] = t;
        }
    }       
    selection_sort(a, n - 1);
}


int main()
{
    int a[100] = { 0 };
    int i, count = 0;

    printf("Enter a series integers: ");
    scanf("%d", &a[0]);
    count++;
    for (i = 1; i < 100 && (getchar() != '\n'); i++) 
	{
        scanf("%d", &a[i]);
        count++;
    }

    printf("Unsorted array: ");
    for (i = 0; i < count; i++)
        printf("%d ", a[i]);

    selection_sort(a, count);

    printf("\nSorted array: ");
    for (i = 0; i < count; i++)
        printf("%d ", a[i]);

    return 0;
}

