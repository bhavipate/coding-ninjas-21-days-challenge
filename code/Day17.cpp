int upperBound(vector<int> &arr, int x, int n){
    int low = 0, high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;

    // write your code here.

}
