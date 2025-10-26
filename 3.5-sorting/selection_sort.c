#include <stdio.h>

int main(void)
{
    //selection sort really checks the elements in an array, selects the smallest one and then swaps its position
    //with the first element. it keeps looping on like this.
    
    int num;
    printf("Enter the number of input integers: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < num - 1; i++)
    {
        int selNum = arr[i], pos = i;
        for (int j = i+1; j < num; j++)
        {
            if (selNum > arr[j])
            {
                selNum = arr[j];
                pos = j;
            }
        }
        
        int temp;
        temp = arr[pos];
        arr[pos] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}