#include <iostream>
using namespace std;
struct employee
//typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
    struct employee ravi;
    //ep ravi;
    ravi .eId = 1;
    ravi .favChar ='r';
    ravi .salary = 100000;

    cout <<"the value is "<<ravi .eId<<endl;
    cout <<"the value is "<<ravi .favChar<<endl;
    cout <<"the value is "<<ravi .salary<<endl;
return 0;    

}