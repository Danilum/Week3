//
//  main.c
//  BubbleSort
//
//  Created by Daniil Shilintsev on 05/09/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Bubblesort(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main(int argc, const char * argv[]) {
    int ar[6] = {1,4,2,6,8,3};
    Bubblesort(ar, 6);
    for(int s = 0; s<6;s++){
        printf("%d ", ar[s]);
    }
    return 0;
}
