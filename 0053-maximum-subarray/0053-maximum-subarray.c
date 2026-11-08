
int maxSubArray(int* num, int numSize) {
    int currentSum = num[0];
    int maxSum = num[0];

    for (int i = 1; i < numSize; i++) {

        if (currentSum + num[i] < num[i]) {
            currentSum = num[i];
        }
        else {
            currentSum = currentSum + num[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
