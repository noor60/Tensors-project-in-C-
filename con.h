
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void con()
{
// int tensoroption1 = 2;
// int tensoroption2 = 3;
int tensor2[3][3] = {{ 3,6,8 }, { 5,4,7 },{ 2,4,7 }}; 
int tensor3[2][3][4] = {  { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} }, { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }};

int dim2[2] = {3,3};
int dim3[3] = {2,3,4};
int indexi;
int pair[] = {0,1};
for(int i =0;i<1;i++){
         if (i == pair[0]){
            indexi = dim3[0];}
         else{
             indexi=dim2[0];}
    }
    int indexj;
    for(int i =1;i<2;i++){
         if (i == pair[0]){
            indexj = dim3[1];}
         else{
             indexj=dim2[1];}
    }
int indexk = dim3[2];
    cout<<"Concatination of Tenosor2[3][3] and Tensor3[2][3][4] \nhas resulting TensorC with dimentions:  "<<"["<<indexi<<"]["<<indexj<<"]["<<indexk<<"]\n";
    int C[indexi][indexj][indexk];
   
    cout<<endl;
    for(int b1=0; b1 < indexi;b1++)
        for (int a2=0; a2 < indexj; a2++) 
            for (int c3=0; c3 < indexk; c3++) 
                for (int a1 = 0; a1 < 3;a1 ++)
                   for (int b3=0;b3 < 4;b3++ ) {
                            C[b1][a2][b3] = tensor2[a1][a2] * tensor3[b1][a1][b3];}
for(int i=0;i<indexi;i++)
     {for (int j=0; j<indexj;j++)
      {for (int k=0;k<indexk;k++)
      { cout << "tensorC[" << i << "][" << j << "][" << k << "] = " << C[i][j][k] << endl;
}
    
      }
     
     }
}