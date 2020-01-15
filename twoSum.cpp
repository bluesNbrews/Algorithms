//Leetcode Two Sum problem - Solution is One-pass Hash Table
//Time complexity is O(n) - Traverse the list containing n elements only once. Each lookup is O(1) time.
//Space omplexity is O(n) - The extra space required depends on the number of items stored in the hash table, which stores at most n elements. 

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

void twoSum(vector<int>& nums, int target){
    unordered_map<int,int> myHashMap;
    vector<int> results;


    for(int i = 0; i < nums.size(); i++){
        //Checking to see if the the complement of this value (when added, the sum equals the target value) has already been saved.
        if(myHashMap.count(target - nums[i])){
            results.push_back(myHashMap[target - nums[i]]);
            //2nd iteration -- results += 0 (myHashMap[2])
            results.push_back(i);
            //2nd iterations - results += 1
        }
        //Otherwise, store the values in the Hash Map
        else
            myHashMap[nums[i]] = i;
            //1st iteration -- myHashMap[2] = 0 
            //3rd iteration -- myHashMap[11] =  2
            //4th iteration -- myHashMap[15] =  3
    }
    for(int i = 0; i < results.size(); i++){
        cout << results[i] << endl;
    }

}

int main(){
    int target = 9;
    vector<int> dummyData;

    dummyData.push_back(2);
    dummyData.push_back(7);
    dummyData.push_back(11);
    dummyData.push_back(15);

    twoSum(dummyData,target);

    return 0;
}