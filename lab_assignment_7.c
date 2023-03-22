#include <stdio.h>

void bubbleSort(int* pData, int n);

int main () {

    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    int count = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: ");
    for (int i = 0; i < count; i++) {
        printf("%i ", array[i]);
    }
    printf("\n\n");

    bubbleSort(array, count);


}

void bubbleSort (int* pData, int n) {
    int swap = 0;
	for (int i = 0; i < n; i++) {
        swap = 0;
		for (int j = 0; j < (n - 1) - i; j++) {
			if (pData[j] > pData[j + 1]) {
				// swap
				int temp = pData[j];
				pData[j] = pData[j + 1];
				pData[j + 1] = temp;
                swap++;
                /*
                printf("Iteration: ");
                for (int i = 0; i < n; i++) {
                    printf("%i ", pData[i]);
                }
                printf("\n");
                */
			}
		}
        printf("Number of swaps for index %i is %i\n", i, swap);
	}
    
}