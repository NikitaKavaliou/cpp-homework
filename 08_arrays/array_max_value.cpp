// finding the biggest number in the list
int findLargestValue(const int numbers[], int size) {
    // I just assume the first number is the biggest for now
    int maxNum = numbers[0];

    // starting from the second element
    for (int i = 1; i < size; i++) {
        // if we find something bigger, we update maxNum
        if (numbers[i] > maxNum)
            maxNum = numbers[i];
    }

    // returning whatever ended up being the biggest
    return maxNum;
}
