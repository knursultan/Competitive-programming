/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    var i = 0,
        j = 0,
        ans = [];
    
    while(true) {
        if (i === m) {
            for (var k = j; k < n; k++)
                ans.push(nums2[k]);
            nums1 = ans;
            console.log(nums1);
            return ans;
        }
        
        if (j === n) {
            for (var k = i; k < m; k++)
                ans.push(nums2[k]);
            return ans;
        }        
                
        if (nums1[i] <= nums2[j]) {
            ans.push(nums1[i]);
            i++;
        } else {
            ans.push(nums2[j]);
            j++;            
        }        
    }
};
