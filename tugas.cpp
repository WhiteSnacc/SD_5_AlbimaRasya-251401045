// buat program yang mendeklerasikan array 3 dimensi dengan ukuran [3][3][4], dan mengisinya dengan angka kelipan 2 (2, 4, 6, 8, 10,..)
#include <iostream>
#include <cstdlib>

int main(){
    // system("clear");
    int arr[3][3][4];
    int angka=2;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                arr[i][j][k]=angka;
                angka+=2;
            }
        }
    }
    for(int i=0; i<3; i++){
        std::cout<<"Lapisan "<<i+1<<':\n';
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                std::cout<<arr[i][j][k]<<'\t';
            }std::cout<<'\n';
        }std::cout<<'\n';
    }  
    return 0;
}
