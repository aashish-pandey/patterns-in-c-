#include<iostream>

using namespace std;

int main(void){

    int n;
    cout<<"Enter number of lines to print\n";
    cin>>n;

    int i, j, k, l;

    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            cout<<"  ";
        }
        for(j = n - i - 1; j < n + i; j++){
            if(j == n-i-1 || j == n + i - 1){
                cout<<i + 1<<" ";
            }else{
            cout<<"0 ";
            }
        }
        cout<<endl;
    }

}
