class Solution {
public:
    int sumByD(vector<int> &arr, int div) {
        int n = arr.size(); // Size of the array
        int sum = 0; // Initialize sum
        // Find the summation of division values:
        for (int i = 0; i < n; i++) {
            sum += ceil(static_cast<double>(arr[i]) / static_cast<double>(div));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int limit) {
        int n = arr.size();
        if (n > limit) return -1; // Check if the array size is greater than the limit
        int low = 1, high = *max_element(arr.begin(), arr.end());

        // Apply binary search:
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(arr, mid) <= limit) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
