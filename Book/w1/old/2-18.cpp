#include <iostream>
using namespace std;

int p=19;
int u=10;
int &x=u;
int *v=&x;
int main()
{
    cout<<*v-1;
    *v=*v-1;
    cout<<*v<<x+1<<u<<p;
    return 0;
}