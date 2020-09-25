int maxSubArray(int* nums, int numsSize)
{
    int Accumulate_Array[numsSize + 1]; //accumulate array
    int answer = INT_MIN;
    int minimum = INT_MAX; 

    Accumulate_Array[0] = 0; //need to calculate the value of one element

    for (int i = 1; i < numsSize + 1; i++)
    {
        Accumulate_Array[i] = Accumulate_Array[i - 1] + nums[i - 1];
    }
    
    //compare and replace the value
    for (int j = 0; j < numsSize; j++)
    {
        if (Accumulate_Array[j] < minimum)
            minimum = Accumulate_Array[j];

        if (Accumulate_Array[j + 1] - minimum > answer)
            answer = Accumulate_Array[j + 1] - minimum;
    }
    return answer;
}
