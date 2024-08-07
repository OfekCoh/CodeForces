// intput: int P
// outout: number of pairs (n,p) such that p!=np , p<P

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int P;
    int count=0;
    int factorial=1;
    double n;
    cin >> P;
    for(int i=2;i<P;i++)
    {
        factorial = factorial*i;
        n=factorial/i;
        if( n == int(n)) count++;
    }
    cout << count;
    return 0;
}