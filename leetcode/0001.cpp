#include <iostream>
#include <vector>

using namespace std;


vector <int> nums;
int target, n, number;

class Input {
	public: 
		void input() {
			scanf ("%d", &n);
			for (int i = 0; i < n; i++) {
				scanf("%d", &number);
				nums.push_back(number);
			}
			scanf ("%d", &target);
		}
};

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
		    vector <int> v;
		    for (int i = 0; i < nums.size(); i++) {
		        for (int j = 0; j < nums.size(); j++) {
		            if (i == j) continue;
		            if (nums[i] + nums[j] == target) {
		                v.push_back(i);
		                v.push_back(j);
		                return v;
		            }
		        }
		    }
		}
};

int main() {
	Input enter;
	enter.input();

	Solution a;
	vector <int> v = a.twoSum(nums, target);

	for (int i = 0; i < v.size(); i++)
		printf ("%d ", v[i]);
	return 0;
}
