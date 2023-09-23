#include<bits/stdc++.h>

using namespace std;

// namespace veer {
//     int x = 10;
// }
// struct node {
//     string str;
//     int num;
//     double doub;
//     char x;

//     node(string str_, int  num_, double doub_, char x_) {
//         str = str_;
//         num = num_;
//         doub = doub_;
//         x = x_;
//     }
// };

int main() {
    // int x = 50;
    // cout<<x<<endl;
    // cout<<veer::x<<endl;
    // struct node varun("Varun", 619, 13.00, 'a');
    // cout<<varun.num<<endl;
    // cout<<varun.str<<endl;
    // varun.doub = 44.98;
    // cout<<varun.doub<<endl;
    // array<int , 5> arr = {1,2,3,4,5};
    // //arr.fill(5);
    // for (int i = 0; i<arr.size(); i++) {
    //     cout<<arr.at(i)<<endl;
    // }

    // for (auto it = arr.begin(); it!=arr.end(); it++) {
    //     cout<<*it<<endl;
    // }

    // for (auto it = arr.rbegin(); it!=arr.rend(); it++) {
    //     cout<<*it<<endl;
    // }

    // for (auto it = arr.end()-1; it>=arr.begin(); it--) {
    //     cout<<*it<<endl;
    // }

    // cout<<arr.front()<<endl; // arr[0]
    // cout<<arr.back()<<endl; // arr.at(arr.size()-1)

    // vector<int> vec1;
    // vec1.push_back(2);
    // vec1.push_back(3);
    // vec1.push_back(2);
    // vec1.push_back(3);
    // cout<<vec1[0]<<endl;
    // vec1.clear();
    // cout<<"this is vec: "<<vec1[0]<<endl;
    // vector<int> vec2(4,10); // ---> {0,0,0,0}

    
    // //copy vec2 in vec3 and vec4 (Two ways)
    // vector<int> vec3(vec2.begin(), vec2.end());
    // vector<int> vec4(vec2);

    // vector<int> abhi1;
    // abhi1.push_back(10);
    // abhi1.push_back(20);
    // vector<int> abhi2;
    // abhi1.push_back(1);
    // abhi1.push_back(2);
    // abhi1.push_back(5);
    // abhi1.push_back(9);
    // vector<vector<int>> veer;

    // veer.push_back(abhi1);
    // veer.push_back(abhi2);

    // for (auto it: veer) {
    //     for (auto it1 : it) {
    //         cout<<it1<<" ";
    //     }
    //     cout<<endl;
    // }
    // 10 * 20 vector
    vector<vector<int>> vec(10, vector<int> (20,0));
    // 3d vector
    vector<vector<vector<int>>> vec(10, vector<vector<int>> (10, vector<int>(30, 0)>);
    return 0;
}