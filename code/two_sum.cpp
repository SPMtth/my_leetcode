#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_map>

/*
 Q:
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
using namespace std;
 */

//class Solution {
//public:
//    vector<int> twoSum(vector<int> &nums, int target) {
//        //Brute Force
//        vector<int> result;
//        for (int i = 0; i < nums.size(); i++) {
//
//            int temp = target - nums[i];
//            //find the matched item
//            for (int j = 0; j < nums.size(); j++) {
//                if (nums[j] == temp && i != j) {
//                    result.push_back(i);
//                    result.push_back(j);
//
//                    return result;
//
//                }
//            }
//        }
//
//    }
//};
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {

        vector<int> result;
        unordered_map<int, int> data;
        for (int i = 0; i < nums.size(); i++) {
            int numToMatch = target - nums[i];
            if (data.find(numToMatch) != data.end()) {
                //Find the matched one
                result.push_back(data[numToMatch]);
                result.push_back(i);
                return result;

            }
            //Add the unmatched item into map
            data[nums[i]] = i;
        }

    }
};


