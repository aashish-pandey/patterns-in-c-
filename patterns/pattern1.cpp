#include<iostream>

using namespace std;


int main(void){

    int n;
    cout<<"Enter the number of lines to be printed\n";
    cin>>n;

    int i, j, k;

    for(int i = 0; i < n; i++){

        for(j = 0; j < n - i; j++){
            cout<<"  ";
        }
        for(j = n-i; j < n; j++){
            cout<<"* ";
        }
        for(j = n; j < n+i-1; j++){
            cout<<"* ";
        }


        cout<<endl;


    }




}
