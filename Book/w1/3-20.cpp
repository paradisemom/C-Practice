#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers;
    int a,b,c,d,e,f;
    cout<<"input six number:";
    cin>>a>>b>>c>>d>>e>>f;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    numbers.push_back(d);
    numbers.push_back(e);
    numbers.push_back(f);
    for(size_t i=0;i<numbers.size();i++){
        if(i!=0&&i!=numbers.size()-1){
            cout<<"The sum betweem "<<numbers[i]<<"is: "<<numbers[i]+numbers[i-1]+numbers[i+1]<<endl;
        }else if (i==0)
        {
            cout<<"The sum betweem "<<numbers[i]<<"is: "<<numbers[i]+numbers[i+1]<<endl;
        }else if (i==numbers.size()-1)
        {
            cout<<"The sum betweem "<<numbers[i]<<"is: "<<numbers[i]+numbers[i-1]<<endl;
        }
    }
    for(size_t i=0;i<numbers.size();i++){
        
            cout<<"the index "<<i+1<<" add the index "<<numbers.size()-i<<"="<<numbers[i]+numbers[numbers.size()-i-1]<<endl;
        
        
    }
    
    return 0;
}