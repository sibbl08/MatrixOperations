#ifndef MATRIXOP_H
#define MATRIXOP_H
#define SIZE 3

// Basic Operations
void mADD(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]);
void mSUB(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]);
void mMUL_EW(double A[SIZE][SIZE], double B[SIZE][SIZE], double C[SIZE][SIZE]);   // element-wise mulitplication


// Linear


// Advanced


// Inverse
void mINV(double A[SIZE][SIZE], double B[SIZE][SIZE]);

#endif