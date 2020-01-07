#include <iostream>

using namespace std;

int GCD(int f, int s){
    if( s == 0){
        return f;
    }
    else{
        cout << "c: " << f%s << endl;
        return GCD(s, f % s);
    }
}

int main()
{
    int f, s;

    cout << "Enter two positive integer: ";
    cin >> f >> s;
    cout << "Greatest Common Divisor of " << f << " and " << s << " is " << GCD(f, s) << endl;
    return 0;
}
