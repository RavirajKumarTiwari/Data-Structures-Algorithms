#include <iostream>
using namespace std;

int main(){
    enum Meal {breakfast,lunch,dinner};
    Meal m1 = lunch;
    //Meal m2 = breakfast;
    //Meal m3 = dinner;
    cout <<(m1 == 1);
    //cout <<(m2 == 2);
    //cout <<(m3 == 3);

}