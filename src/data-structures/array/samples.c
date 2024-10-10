#include <stdio.h>

void arraySyntax() {
    printf("\n------>> Syntax \n");

    int nums[4] = {1, 2, 3, 4};

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        int element = nums[i];
        printf("elment -> %d\n", element);
    }
}