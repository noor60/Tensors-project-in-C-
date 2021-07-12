#include <iostream>
#include <vector>
#include "con.h"
#include "header_file.h"
using namespace std;

int main() { 

 int tensor1[5] = {1, 2, 3, 4, 5};
 int tensor2[3][3] = {{ 3,6,8 }, { 5,4,7 },{ 2,4,7 }}; 
 int tensor3[2][3][4] = {  { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} }, { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }};
 cout<<"\n\n************************************\n";
 cout<<"        Displaying the Tensors      \n";
 cout<<"************************************\n";

Tensor <int> a(tensor1, 5); 
a.print();
Tensor <int> b(tensor2,9);
Tensor <int> c(tensor3,24); 

cout<<"\n************************************\n";
cout<<"         Indexing Tensors           \n";
cout<<"************************************\n";
int jj=0;
cout<<"In this part the user is able to directly access any \nentry of the Tensor by providing all the indexes.\nPress 1 to proceed."<<endl;
cin >> jj;
if (jj==1)
 //for indexing
 {int option, x, y, z = 0;
//  int x (0);
//  int y (0);
//  int z (0);
 cout<<"Enter Tensor Rank to display entries.\nOptions: \nfor rank 1: 1\nfor rank 2: 2\nfor rank 3: 3"<<endl;
 cin>> option;                                 
 switch(option) {
         case 1 :
          cout<<"Now, Enter "<<option<<" index for rank 1 Tensor: \n";
          cin>>x;
          cout<<"The corresponding entry is: ";
          a.indexing(x); //For rank1
          break;
         case 2 :
            cout<<"Now, Enter "<<option<<" indices for rank 2 Tensor: \n";
            cin >> x >>y;
            b.indexing(tensor2,x,y);
            break;
         case 3 :
            cout<<"Now, Enter "<<option<<" indices for rank 3 Tensor: \n";
            cin >> x >> y >> z;
            c.indexing(tensor3,x,y,z);
           break;
        default:
         cout<<"This rank is not supported"<<endl;
         break;}}

jj=0;
cout<<"\npress 1 to proceed."<<endl;
cin >> jj;
if (jj==1)

{cout<<"\n************************************\n";
 cout<<"        Tensor Contraction            \n";
 cout<<"************************************\n";}
jj=0;
cout<<"In this secition two Tensors of rank 2 and 3 \n are contracted over a pair(0,1). \nto see the resulting tensor press "<<1<<endl;
cin >> jj;
if (jj==1)
      con();
         
 return 0;
}