/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *return_Array = (int *)malloc(2 * sizeof(int)); //malloc, given two integer
    
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                *return_Array = i; 
                *(return_Array + 1) = j;
                *returnSize = 2; //SizeOfArray must be given value
                return return_Array;
            }
        }
    }
    return 0;
} 
