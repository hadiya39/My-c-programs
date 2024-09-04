//sort an integer array using functions and pointers
#include<stdio.h>
void sort(int *q, int size);

int main()
{
    int n, i;

    // user size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];  // 
    int *p = a; // Pointer to the array

    // Take user input
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Original Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Call the sort function
    sort(p, n);

    // Print the sorted array
    printf("\nSorted Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// Function to sort the array using pointers
void sort(int *q, int size)
{
    int i, j, temp;
    int *r = q;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(q) > *(q + 1))
            {
                temp = *(q);
                *(q) = *(q + 1);
                *(q + 1) = temp;
            }
            q++;
        }
        // Reset q to r at the end of each pass
        q = r;
    }
}