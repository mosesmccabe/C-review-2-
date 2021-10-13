#include <iostream>
using namespace std;

void message(int time)
{
    cout << "message called with " << time << " in times.\n";
    if (time > 0)
    {
        cout << "This is a recursive function.\n\n";
        message(time - 1);
    }
    cout << "message return with " << time << " in times.\n";
    
}

int main()
{
    message(5);
    return 0;
}