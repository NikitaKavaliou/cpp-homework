// doing a simple binary search
bool binarySearch(const int numbers[], int size, int search)
{
    int iFirst = 0;          // start of the range
    int iLast = size - 1;    // end of the range (I hope size is correct)

    // keep going while the range is still valid
    while (iLast >= iFirst)
    {
        // finding the middle (just averaging)
        int iMiddle = (iLast + iFirst) / 2;

        // checking if we found the number
        if (numbers[iMiddle] == search)
            return true;

        // if the middle number is too big, look in the left half
        else if (numbers[iMiddle] > search)
            iLast = iMiddle - 1;

        // otherwise look in the right half
        else
            iFirst = iMiddle + 1;
    }

    // if we get here, the number wasn't found
    return false;
}
