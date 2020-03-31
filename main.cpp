#include<iostream>
#include "math_tools.h"
#include "display_tools.h"
using namespace std;
int main() {
	
	//Vector zeroes_vector;
	Matrix example_matrix;
    //zeroes(zeroes_vector,5);
    zeroes(example_matrix,3);
    
    //showVector(zeroes_vector);
    showMatrix(example_matrix);
    example_matrix.at(0).at(0)=2;
    example_matrix.at(0).at(1)=2;
    example_matrix.at(0).at(2)=3;
    
    example_matrix.at(1).at(0)=4;
    example_matrix.at(1).at(1)=5;
    example_matrix.at(1).at(2)=6;
    
    example_matrix.at(2).at(0)=7;
    example_matrix.at(2).at(1)=8;
    example_matrix.at(2).at(2)=9;
    cout<<endl;
    showMatrix(example_matrix);
    cout<<endl;
    cout<<"determinante: "<<determinant(example_matrix);
    return 0;
}


