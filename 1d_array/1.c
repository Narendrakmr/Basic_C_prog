#include <stdio.h>

int main() {
    int n, i;
    int arr[n], largest, smallest, range;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    range = largest - smallest;
    printf("The range of elements in the array is: %d\n", range);

    return 0;
}
