#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string word,previousWord="";
    cout<<"�п�J��r:"<<endl;
    while (cin>>word&&!word.empty())
    {
        if (isupper(word[0])&&word==previousWord)
        {
            cout<<word<<":the begin is upper and repeated"<<endl;
            break;
        }
        previousWord=word;      
    }
    

    return 0;
}
