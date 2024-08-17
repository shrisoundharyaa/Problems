#include<stdlib.h>
int compare(const *a,const *b){
    return (*(int *)a - *(int *)b);
}


int majorityElement(int* nums, int numsSize) {
   qsort(nums,numsSize,sizeof(int),compare);
   return nums[numsSize/2];
}
