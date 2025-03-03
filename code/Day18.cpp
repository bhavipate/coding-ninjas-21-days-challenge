vector<int> spiralMatrix(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    
    while (top <= bottom && left <= right) {

    for (int i = left; i <= right; i++) {
        result.push_back(matrix[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++) {
        result.push_back(matrix[i][right]);
    }
    right--;

    if (top <= bottom) {
        for (int i = right; i >= left; i--) {
            result.push_back(matrix[bottom][i]);
        }
        bottom--;
    }

    if (left <= right) {
        for (int i = bottom; i >= top; i--) {
            result.push_back(matrix[i][left]);
        }
        left++;
        }
    }

    return result;
}
