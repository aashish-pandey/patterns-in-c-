#include<iostream>

using namespace std;


int main(void){

    int n;
    cout<<"Enter the number of lines\n";
    cin>>n;

    int i, j, k, l;
    k = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){

            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }



}
