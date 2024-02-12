#include <stdio.h>

// Find the median of two sorted array of different size

double findMedianSortedArrays(int nums1[], int nums1Size, int nums2[], int nums2Size);

int main() {
    
    int nums1[] = {90, 240, 300};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2[] = {10, 13, 14, 20, 25};
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    
    printf("The given first array is: ");
    for (int i = 0; i < nums1Size; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    printf("The given second array is: ");
    for (int i = 0; i < nums2Size; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");
    printf("The median of two different size arrays is: %.6f\n", findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size));

    return 0;
}

double findMedianSortedArrays(int nums1[], int nums1Size, int nums2[], int nums2Size) {
    int mergedSize = nums1Size + nums2Size;
    int merged[mergedSize];
    int i = 0, j = 0, k = 0;

    // Merge two arrays into one sorted array
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {
        merged[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        merged[k++] = nums2[j++];
    }

    // Calculate median
    if (mergedSize % 2 == 0) {
        return (merged[mergedSize / 2 - 1] + merged[mergedSize / 2]) / 2.0;
    } else {
        return merged[mergedSize / 2];
    }
}