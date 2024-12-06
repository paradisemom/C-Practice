#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string word,previousWord="";
    cout<<"½Ð¿é¤J¤å¦r:"<<endl;
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
