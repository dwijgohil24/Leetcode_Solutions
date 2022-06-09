//Contributed by- Dwijsinh H Gohil
//Problwm Name- Two Sum II - Input Array Is Sorted.
//solution using two pointer approach.
//c++ - easy to understand simple approach.

//run-time 15-ms faster than 75.98% of C++ online submissions for Two Sum II - Input Array Is Sorted.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(0);
        int left=0;   //intialize left pointer with left most index i.e.'0'
        int right=numbers.size()-1; // initialize right pointer with right most index ,i.e. size of vector numbers-1
        for(int i=0;i<numbers.size();i++){
            if((numbers[left]+numbers[right])==target && (left!=right)){     //if we find the two numbers with target sum we will push back their indexes int o our answer vector.
                int index1=left+1;           //since we have used zero based indexing and acc. to que.it is 1 based indexing so we will just add 1 to our indexes.
                int index2=right+1;
                ans.push_back(index1);
                ans.push_back(index2);
                break;                        //since there is exactly one solution therfore as soon as we find one we will come out of the loop.
                
            }     
            else{                                             //if sum of no.'s at current indexes is not equal to target
                if((numbers[left]+numbers[right]) >target){   // we will check if sum is greater than target if yes,then it means, to make it equal we must move one index to the left of current right index (since it is given that input array is sorted hence if we move one index left of right than the value of sum will decrease and hence it will help to reach closer to our target sum).
                    right--;
                }
                else{                     //similarly if sum is lesser than target then to make the sum closer to the target or equal to it, we must move increment left pointer by one.
                    left++;
                }
            }
        }
        return ans;    //at last we will return our ans vector .
    }
};
