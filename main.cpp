#include <iostream>

using namespace std;
void setnum(int &a)
{

    a=0;
}
int main()
{
    cout << "Hello world!" << endl;
    int b=1;
    setnum(b);
    cout<<b;
    return 0;
}
