#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse(vector<int> v)
{
    int start = 0, end = v.size() - 1;

    while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // or u can use line no 11
        // cout<<v.at(i)<<"\t";
    }
    cout << "\n";
}
int main()
{
    int input, size;
    vector<int> vec;

    cout << "Enter the size of vector : \n";
    cin >> size;

    cout << "Enter the elements of vector : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    vector<int> ans = reverse(vec);

    cout<<"Reverse Array :\n";
    display(ans);
    return 0;
}