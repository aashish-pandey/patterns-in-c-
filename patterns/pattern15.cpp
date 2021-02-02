#include<iostream>

using namespace std;

int main(void){

    int n;
    cout<<"Enter the number of lines to print\n";
    cin>>n;

    int i, j, k, l;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            if(i == 0|| i == n-1){
                cout<<"* ";
            }else if(j == 0 || j == i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}
