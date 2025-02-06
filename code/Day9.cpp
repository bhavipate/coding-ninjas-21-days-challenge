vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest) {
            secondLargest = a[i];
        }

        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest) {
            secondSmallest = a[i];
        }
    }

    return {secondLargest, secondSmallest};
    // write your code here.
}
