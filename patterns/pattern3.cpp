#include<iostream>

using namespace std;

int main(void){

    int n;
    cout<<"Enter the number of lines to print\n";
    cin>>n;

    int i, j, k, l;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i = n - 2; i>= 0; i--){
        for(j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


}
