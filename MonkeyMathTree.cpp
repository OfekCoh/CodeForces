#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a= 4.0 / 3.0;;
    double b=pow(10,9);
    std::cout<< fmod(a,b+7);
    return 0;
}