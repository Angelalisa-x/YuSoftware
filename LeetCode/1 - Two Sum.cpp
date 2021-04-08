vector<int> twoSum(vector<int>& nums, int target) {

    vector<pair<int, int>> a;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        a.push_back({nums[i], i});
    }

    sort(a.begin(), a.end());
    int l = 0, r = n - 1;

    vector<int> ans;

    while(l < r){
        if(a[l].first + a[r].first == target) {
            ans.push_back(a[l].second);
            ans.push_back(a[r].second);
            break;
            
        }else if(a[l].first + a[r].first > target) {
            r--;
        }else {
            l++;
        }
    }

    return ans;
    
}

// Your input
// [2,56,23,15]
// 25
// Output
// [0,2]
// Expected
// [0,2]