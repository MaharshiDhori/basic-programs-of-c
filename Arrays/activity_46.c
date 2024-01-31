#include<stdio.h>

//find the smallest positive number missing from an unsorted array.

int main()
{
    int arr[9] = {3, 1, 4, 10, -5, 15, 2, -10, -20};
    printf("\n Given array is: ");
    int n = 9;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    //If all elements are negative then return "1" as answer because set starts from 1 not zero.
    if(min >= 0){
        printf("\nSmallest positive number missing is: 1");
        return 0;
    }


    if(max > n/2){
        for(int i=n/2; i<n; i++){
            if(arr[i] > 0){
                if(arr[i] != i+1){
                    printf("\nSmallest positive number missing is: %d", i+1);
                    return 0;
                }
            }
        }
    }else{
        for(int i=0; i<n/2; i++){
            if(arr[i] > 0){
                if(arr[i] != i+1){
                    printf("\nSmallest positive number missing is: %d", i+1);
                    return 0;
                }
            }
        }
    }
    
    printf("\nNo smallest positive integer missing.");
    return 1;
}