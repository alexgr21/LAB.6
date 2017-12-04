#include <stdio.h>

void minmax(int a[], int *min, int *max)
{
    int i;

    *min = a[0];
    *max = a[0];

    for(i = 1; i < sizeof(a); i++)
        if(a[i] < *min)
            *min = a[i];
        if(a[i] > *max)
            *max = a[i];
}

int main()
{
    int n;
    int i;
    int minim;
    int maxim;
    int arr[250];

    printf("Input number of elements in the array: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &arr[i]);
    }

    minmax(arr, &minim, &maxim);

    printf("\nThe minimum value in the array is: %i", minim);
    printf("\nThe maximum value in the array is: %i", maxim);
}
