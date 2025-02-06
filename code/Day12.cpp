#include <bits/stdc++.h>

vector<int> addOneToNumber(vector<int>& arr) {
    int n = arr.size();
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int sum = arr[i] + carry;
        arr[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0) {
            break; 
        }
    }

    if (carry > 0) {
        arr.insert(arr.begin(), carry);
    }    

    while (arr.size() > 1 && arr[0] == 0) {
        arr.erase(arr.begin());
    }

    return arr;
}
