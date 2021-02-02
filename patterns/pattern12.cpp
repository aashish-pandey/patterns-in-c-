#include<iostream>

using namespace std;

int main(void){

    int n;
    cout<<"Enter the number of lines to print\n";
    cin>>n;

    int i, j, k, l;

    for(i = 0; i < n; i++){
        k = 1;
        for(j = 0; j < n - i - 1; j++){
            cout<<"  ";
        }
        for(j = n - i - 1; j < n + i ; j++){

            cout<<k++<<" ";
        }

        cout<<endl;
    }

}
