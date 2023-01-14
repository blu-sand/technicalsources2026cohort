#include <iostream>
using namespace std;

int main(){
    cout<<"enter how many characters tall or wide you want the Z to be"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==(n-1) || i+j==(n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
