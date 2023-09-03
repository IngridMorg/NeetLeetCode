//
// Created by Ingri on 03/09/2023.
//
#import <unordered_map>
#import <string>
#import <vector>
#import <stdio.h>

//TODO::
//See if you can make this better by using an unordered_set

bool containsDuplicate(std::vector<int>& nums){
    std::unordered_map<int, int> hash;

    for(int i = 0;i<nums.size();i++){
        if(hash.insert({nums.at(i),nums.at(i)}).second == false){
            //then there is a duplicate
            printf("%i\n", nums.at(i));
            return true;
        }
    }

    return false;
}
int main(){
    int og_nums[] = {1,1,1,3,3,4,3,2,4,2};
    printf("%i\n", sizeof(og_nums)/sizeof(og_nums[0]));
    int size = sizeof(og_nums)/sizeof(og_nums[0]);
    std::vector<int> ns;
    for(int i = 0;i<size;i++){
        ns.emplace_back(og_nums[i]);
    }
    for(int i = 0;i<size;i++){
        printf("%i\n",ns.at(i));
    }
    std::unordered_map<int, int> hash;

    bool result = containsDuplicate(ns);
    if(result == false){
        printf("no duplicate");
    }
    else{
        printf("duplicate");
    }
    return 0;
}
