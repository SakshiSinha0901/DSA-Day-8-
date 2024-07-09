// //Dynamic memeory allocation
// #include<iostream>
// using namespace std;
// void fun(int a[],int n){
//     for(int i =0;i<n; i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int * arr = new int[n];
//     fun(arr,n);
// }

// How vector is used
#include<iostream>
#include <vector>
using namespace std;
void print(vector<int>v){
    int size = v.size();
    for(int i = 0; i<size;i++){
        cout<<v[i]<<endl;
    }
}
    
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);
}