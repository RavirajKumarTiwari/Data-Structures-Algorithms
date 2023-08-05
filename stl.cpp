#include <bits/stdc++.h>
using namespace std;

int main(){
    // array<int, 5> freq = {1, 2, 3, 4, 5};
    // int arr[5] = {1};
    // freq.fill(10);
    // arr.fill(20);

    // for(int i = 0; i < 5; i++){
    //     cout <<freq.at(i) << " ";
    // }

    // for(auto i = freq.begin(); i != freq.end(); i++){
    //     cout << *i << " ";
    // }

    // for(auto i = freq.rbegin(); i != freq.rend(); i++){
    //     cout << *i << " ";
    // }

    // Reversing through range_based for loop
    // for(auto i: arr){
    //     cout<< i << endl;
    // }

    // cout<< "VECTOR"<< endl;
    // emplace_back() takes less time as compare to push_back()
    // vector<int> arrVec;
    // cout<< arrVec.max_size()<< endl;
    // cout<< arrVec.capacity()<< endl;

    // arrVec.emplace_back(40);
    // cout<< arrVec.capacity()<< endl;


    // arrVec.clear();

    // vector<int> vec1(4, 5); //--> {5, 5, 5, 5}
    // vector<int> vec2(5, 2);
    // vec1.emplace_back(10);


    // vector<int> copy(vec1.begin(), vec1.end());
    // vector<int> copy2(copy);

    // for(auto i: copy2){
    //     cout<< i<< endl;
    // }
    // cout<< vec1.load_factor()<< endl;
    // cout<< vec1.max_size()<< endl;
    // cout<< vec1.capacity()<< endl;
    // cout<< vec1.upper_bound()<< endl;

// 2D Vector
    // vector <vector<int> > vecD;

    // vecD.push_back(vec1);
    // vecD.push_back(vec2);
    // vecD.push_back(copy);
    // vecD.push_back(vec2);
    // vecD.push_back(copy2);

// cout<< "Printing 2D Vector";
//     for(auto i: vecD){
//         for(auto newI: i){
//             cout<< newI<< " ";
//         }
//         cout<<endl;
//     }
    
    list<int> l1 = {1, 2, 3, 4, 5}; //Linked List
//     auto itr = l1.begin(); //--> first element 1
//     cout<< "begin "<< *itr<< endl;

//     auto last = l1.end(); //--> next to the last element 5
//     cout<< "end "<< *last<< endl;

//     auto rev_first = l1.rbegin(); //--> first element in reverse order 5
//     cout<< "Rbegin "<< *rev_first<< endl;

//     auto rev_last = l1.rend(); //--> next to the last element in reverse order
//     cout<< "Rend "<< *rev_last<< endl;

//     advance(itr, 2); //--> itr is now pointing to 3
//     cout<< *itr<< endl; // --> 3

//     advance(itr, -1); //--> itr is now pointing to 2

// //range_based for loop
//     for(auto i: l1){
//         cout<< i<< " ";
//     } // --> 1 2 3 4 5

//     cout<< endl;

// //Using iterator
//     for(auto i = l1.rbegin(); i != l1.rend(); i++){
//         cout<< *i<< " ";
//     } // --> 5 4 3 2 1

//     cout<< "Insertion"<< endl;

    auto itr = l1.begin();
    advance(itr, 2); // --> itr is now pointing to 3
    l1.insert(itr, 10); // --> 1 2 10 3 4 5
    for(auto i: l1){
        cout<< i<< " ";
    }

    cout<< endl;

    advance(itr, 2); // --> itr is now pointing to 5
    l1.insert(itr, 2, 20); // --> 1 2 10 3 4 20 20 5
    for(auto i: l1){
        cout<< i<< " ";
    }
    cout<< endl;

    itr = l1.begin();
    auto l = l1.begin();
    auto r = l1.begin();
    advance(r, 2); // --> r is now pointing to 10

    l1.insert(itr, l, r); // --> 1 2 1 2 10 3 4 20 20 5
    for(auto i: l1){
        cout<< i<< " ";
    }

    cout<<"\ndeletion"<< endl;

    auto s_itr = l1.begin();
    advance(s_itr, 2);

    auto e_itr = l1.begin();
    advance(e_itr, 4);

    l1.erase(s_itr,e_itr); // l1.erase(starting_index, ending_index)
    for(auto i: l1){
        cout<< i<< " ";
    }// --> 1 2 10 3 4 20 20 5 
}
