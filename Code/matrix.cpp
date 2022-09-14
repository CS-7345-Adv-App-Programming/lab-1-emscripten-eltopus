#include "matrix.h"
#include <iostream>
#include <sys/time.h> 

using namespace std;

Matrix::Matrix() {
    
}


double Matrix::multMatrix(int n) { 

    double A[n][n], B[n][n], C[n][n];
    
    // Initialize Matrices
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j){
            A[i][j] = (double)rand()/ (double)RAND_MAX;
            B[i][j] = (double)rand()/ (double)RAND_MAX;
            C[i][j] = 0;
        }

    }

    // Matrix multiplication

    int i,j,k;

    struct timeval start, end;
    long seconds, useconds; 
  
    // start timer. 
    gettimeofday(&start, NULL); 
  
    // unsync the I/O of C and C++. 
    ios_base::sync_with_stdio(false);  

  
    for(i = 0; i < n; ++i) {
        for(int k = 0; k < n; ++k) { 
            for(j = 0; j < n; ++j) {
                C[i][j] += A[i][k] * B[k][j];
                }
	    }
    }

    gettimeofday(&end, NULL); 

    double time_taken;

    // seconds = end.tv_sec - start.tv_sec; //seconds
    // useconds = end.tv_usec - start.tv_usec; //milliseconds
    // time_taken = ((seconds) * 1000 + useconds / 1000.0);

    // time_taken = (double)(end.tv_usec - start.tv_usec) / 1000000 + (double)(end.tv_sec - start.tv_sec);
        

    time_taken = (end.tv_sec - start.tv_sec) * 1e6; 
    time_taken = (time_taken + (end.tv_usec -  start.tv_usec)) * 1e-6; 
  
    return time_taken;
}