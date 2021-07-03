/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//Two pointer approach

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *a = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;

    int l = 0, r = numsSize - 1;

    while (l < r)
    {
        int currSum = nums[l] + nums[r];

        if (currSum < target)
        {
            l++;
        }
        else if (currSum > target)
        {
            r--;
        }
        else
        {
            a[0] = l;
            a[1] = r;
            break;
        }
    }

    return a;
}

//Brute Force approach

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    int *a = malloc(2 * sizeof(*a));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                a[0] = i;
                a[1] = j;
                break;
            }
        }
    }
    return a;
}