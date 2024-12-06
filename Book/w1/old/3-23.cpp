#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers={1,2,3,4,5,6,7,8,9,10};
    
    
    for(auto it=numbers.begin();it!=numbers.end();it++){
        *it *=2;
    }
    for(size_t i=0;i<numbers.size();i++){
        cout<<numbers[i];
    }
}