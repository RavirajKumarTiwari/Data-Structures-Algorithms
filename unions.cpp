#include <iostream>
using namespace std;
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main ()
{
    union money m1;
    m1 .rice = 34;

    union money m2;
    m2 .car = 'R';
    cout <<m1 .rice<<"\n";
    cout <<m2 .car;


}