vector<int> reverseArray(int n, vector<int> &nums)
{
    int left = 0, right = n - 1;
    while (left < right) {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
    return nums;

}
