#include<stdio.h>
#include "MatrixOp.h"

void mADD(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void mSUB(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mMUL_EW(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] * B[i][j];
        }
    }
}
void mINV(double A[SIZE][SIZE], double B[SIZE][SIZE]){
    double det=mDET(A);
    if(det==0){
        printf("Matrix is not invertible, because determinant is 0 \n");
        return;
    }
    double adj[SIZE][SIZE];

    mADJ(A, adj);

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            B[i][j] = adj[i][j] / det;
        }
    }
}