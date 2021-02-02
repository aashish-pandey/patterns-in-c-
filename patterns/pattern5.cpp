#include<iostream>

using namespace std;


int main(void){

    int n;
    cout<<"Enter the number of lines to print\n";
    cin>>n;

    int i, j, k, l;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == 0 || j == n - 1){
                cout<<"* ";
            }else if(i == 0 || i == n - 1){
            cout<<"* ";
            }else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }

}
