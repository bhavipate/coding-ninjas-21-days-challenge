vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int, int> freqMap;

    for (int num : v) {
        freqMap[num]++;
    }

    int highestFreqElement = INT_MIN;
    int lowestFreqElement = INT_MAX;
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;

    for (auto& entry : freqMap) {
        int element = entry.first;
        int frequency = entry.second;

        if (frequency > maxFreq || (frequency == maxFreq && element < highestFreqElement)) {
            maxFreq = frequency;
            highestFreqElement = element;
        }

        if (frequency < minFreq || (frequency == minFreq && element < lowestFreqElement)) {
            minFreq = frequency;
            lowestFreqElement = element;
        }
    }

    return {highestFreqElement, lowestFreqElement};
}
