string read(int n, vector<int> book, int target) {
    sort(book.begin(), book.end());
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = book[left] + book[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}
