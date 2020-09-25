//compare, and choose the minimum value
int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize)
{
    //dynamic programming
    int *dynamic_programming = (int *)calloc(triangleSize + 1, sizeof(int));

    for (int i = triangleSize - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            dynamic_programming[j] = minimum(dynamic_programming[j], dynamic_programming[j + 1]) + triangle[i][j];
        }
    }

    return dynamic_programming[0];

    free(dynamic_programming); //release memory
}
