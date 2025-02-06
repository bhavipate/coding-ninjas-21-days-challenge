int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}
