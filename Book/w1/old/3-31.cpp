#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int numbers[10]={0,1,2,3,4,5,6,7,8,9};
    int nums2[10]={};
    for(size_t i=0;i<sizeof(nums2);i++){
        nums2[i]=numbers[i];
    }
    for(int i:nums2){
        cout<<i;
    }
    vector<int> suji={0,1,2,3,4,5,6,7,8,9};
    vector<int> koko=suji;
    for(int i:koko){
        cout<<i;
    }
    return 0;
}