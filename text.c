/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int *result=(int*)malloc(2*sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            result [0]=i;
            result [1]=j;
            *returnSize=2;
            return result;
        }
    }
}
*returnSize=0;
return 0;
}
