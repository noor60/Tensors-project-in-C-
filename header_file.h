#include <iostream>
#include <vector>
using namespace std;

template <typename T> 
class Tensor { 
private: 
    T *ptr; 
    T *ptr1; 
    // T tensor1[3][3];
    // T tensor3[2][3][4];
    int size; 
    // T tensortype; 
    // int rank; 
public: 
    //Tensor(){cout<<"constructor called"<<endl;}; 
    Tensor(T tensor1[], int s);//constructor for 1d tensor
    Tensor(T tensor2[3][3], int s);//constructor for 2d tensor
    Tensor(T tensor3[2][3][4], int s);//constructor for 3d tensor
    void print(); 
    void indexing(int x);
    void indexing(T tensor2[3][3],int x,int y);
    void indexing(T tensor3[2][3][4],int x,int y,int z);
    void concat(T tensor2[3][3],T tensor3[2][3][4]);
};
template <typename T> 
Tensor<T>::Tensor(T tensor1[], int s) { 
    cout<<"\n\ntensor1 :";
  
    ptr = new T[s]; 
    size = s; 
    for(int i = 0; i < size; i++) 
        ptr[i] = tensor1[i]; 
} 

template <typename T> 
void Tensor<T>::print() { 
    cout<<endl;
    for (int i = 0; i < size; i++) 
        cout<<"tensor1["<<i<<"]="<<*(ptr + i)<<endl; 
    cout<<endl; 
    cout<<endl;
}
template <typename T> 
Tensor<T>::Tensor(T tensor2[3][3], int s) { 
    cout<<"***********************"<<endl;
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            //   cout<<tensor2[i][j]<<" ";
              cout << "tensor2[" << i << "][" << j << "]" << "= " << tensor2[i][j] << endl;

             }
             //cout<<endl;
             }
}
template <typename T> 
Tensor<T>::Tensor(T tensor3[2][3][4], int s) { 
   cout<<"*******************************"<<endl;
   for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                cout << "tensor3[" << i << "][" << j << "][" << k << "] = " << tensor3[i][j][k] << endl;
            }
        }
    }
}
   

template <typename T> 
void Tensor<T>::indexing(int x) { 
     for (int i = 0; i < 5; i++) {
            //   cout<<tensor1[x]<<" ";
            if (i == x)
              cout<<" "<<*(ptr + i)<<endl;
             }
            
}
template <typename T> 
void Tensor<T>::indexing(T tensor2[3][3],int x,int y) { 

           cout<<"The entry corresponing to indexes "<<x<<" and "<<y<<" is: "<<tensor2[x][y]<<endl;
           cout<<"or tensor2["<<x<<"]["<<y<<"]"<<" = "<<tensor2[x][y]<<endl;
            
}
template <typename T> 
void Tensor<T>::indexing(T tensor3[2][3][4],int x,int y,int z) { 
           cout<<"The entry corresponing to indexes "<< x <<","<< y <<" and "<<z<<" is: "<<tensor3[x][y][z]<<endl;
           cout<<"or tensor3["<<x<<"]["<<y<<"]["<<z<<"]"<<" = "<<tensor3[x][y][z]<<endl;
            
}

/////////////////


template <typename T> 
void Tensor<T>::concat(T tensor2[3][3],T tensor3[2][3][4])

{

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
