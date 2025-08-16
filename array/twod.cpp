#include<iostream>
using namespace std;


int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};


    

    int i =0,j=0;
    cout<<"Enter elements";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         cin>>arr[i][j];
        }
    }

    cout<<"elements"<<endl;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
