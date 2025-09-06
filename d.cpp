#include <iostream>
#include <vector>
#include<string>
using namespace std;
// void print(vector<int> v){
//     for(auto i:v){
//         cout<<i<<" ";
//     }
// }
int main() {
    int n;
    cin >> n;
    while(n--){
        int n,s,m;
        int cnt=0;
        cin>>n>>s>>m;
        vector<int> arr;
        for(int h=0;h<m-1;h++){
            arr.push_back(0);
        }
        for(int i=0;i<3;i++){
            int l,r;
            cin>>l>>r;
            for(int j=l+1;j<r;j++){
                arr[j]=1;
            }
        }
        int y;
        for(y=0;y<m-1;y++){
            if(arr[y]==0){
                cnt++;
            }
            else{cnt=0;}
            if(cnt==3){
            cout<< "Yes"<<endl;
            break;
            }
        }
        if(cnt<3){cout<< "no"<<endl;}
    }
}
