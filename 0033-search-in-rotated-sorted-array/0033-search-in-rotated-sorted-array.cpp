class Solution {
public:
    int search(vector<int>& nums, int target) {
	int i=0,j=nums.size()-1,mid=0;
	while (i <= j){
		mid = (i+j)/2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] < nums[i]){
			// break in 1st half
			if (target > nums[mid] && target <= nums[j])
				i = mid+1;
			else
				j = mid-1;
		}
		else {
			// break in 2nd half or no break
			if (target >= nums[i] && target < nums[mid])
				j = mid-1;
			else
				i = mid+1;
		}          
	}
	return -1;
}
};