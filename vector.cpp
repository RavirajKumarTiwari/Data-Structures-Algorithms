#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"\t";//or u can use line no 11
       //cout<<v.at(i)<<"\t";
    }
    cout<<"\n";
    
}
int main ()
{
    int input, size;
    vector<int> vec;

    cout<<"Enter the size of vector : \n";
    cin>>size;

    cout<<"Enter the elements of vector : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>input;
        vec.push_back(input);
    }
    //vec.pop_back();
    display(vec);
    vector<int> :: iterator itr = vec.begin();
    // vec.insert(itr+1,500,50);
    display(vec);

    return 0;
}