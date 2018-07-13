#include <iostream>
#include<stdlib.h>
using namespace std;
swap_num(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

int main()
{
    cout << "Hello world!" << endl;
    int a,b;
    cin>>a>>b;
    swap_num(a,b);
    cout<<a<<" "<<b;
    return 0;
}
