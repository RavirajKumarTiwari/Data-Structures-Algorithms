#include<iostream>
using namespace std;

long long int sqrt(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    long long int mid = start + (end - start) / 2;

    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{

    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i <= precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"\nEnter any no. ";
    cin>>n;
    cout<<"After decimal how many digit u want : ";
    int d;
    cin>>d;

    int tempSol = sqrt(n);
    cout<<"temp solution = "<<tempSol<<endl;

    cout << "Final Answer is " << morePrecision(n, d, tempSol) << endl;

    return 0;
}