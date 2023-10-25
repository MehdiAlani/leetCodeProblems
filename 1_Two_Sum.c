#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * Result = malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize && j !=i; j++){
            if(nums[i] + nums[j] == target){
                Result[0]=i;
                Result[1]=j;
            }
        }   
    }
    return Result;
} 
int main(){
    int Par[] = {3,2,4};
    int * Result = twoSum(Par,3,5,Par);
        printf("%d ",Result[1]);
    return 0;
}