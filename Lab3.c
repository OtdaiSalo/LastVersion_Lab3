#include <math.h>
#include <stdio.h>
#define i 5 
#define j 5 

void inputArray(int mass[][j]){
   for(int q=0; q<5; q++){
       for(int e=0; e<5; e++){
           printf("¬вед≥ть елемент матриц≥ а[%d][%d] ", q, e);
           printf("\n");
           scanf("%d",&mass [q][e]); 
       }
   }
}

void sortArray(int mass[][j]){
int a, b, k, x, n; 
for (k=0; k<j; k++){
   for (b=0; b<i-1; b++){
       for (a=0; a<=j-1; a++){
           if ( mass[a][b] < mass[a][b+1]){
               x = mass[a][b];
               mass[a][b] = mass[a][b+1];
               mass[a][b+1] = x; 
           }
       }
   }
}
}


void printArray(int mass[][j]){
int a1, b1;
for(a1=0; a1<5; a1++){
    for(b1=0; b1<5; b1++){
    printf("%4.1d ", mass[a1][b1]);
}
printf("\n");
}
}


void overDiagonal( int arr[][j]) {
    int sum1_4 [4] = {1, 1, 1, 1};
    int sum = 1;
    int Func = 0;
    for(int a=0; a<5; a++){
        for(int b=0; b<5-a; b++){
        sum1_4 [a] = sum1_4 [a] * arr[b][a]; 
    }
    }
    for(int b=0; b<4; b++){
        sum1_4 [b] = pow(sum1_4 [b],(1.0/(4-b)));
        printf("%d ", sum1_4 [b]);
        Func += sum1_4 [b];
    }
    printf("\n");
    printf("—ума дор≥внюЇ середн≥х геометричних значень = %d ",Func);
}


void main(void){
int mass [i][j] = {0};/* = {{0, 2, -2, 89,21},
    {-1, -4, 36, 41, 71},
    {56, 93, 5, -2, -51},
    {1, 3, -8, 0, 9},
    {23, 41, 5, 8, -2}};*/
    
int *arr = mass;
inputArray(arr);
sortArray(arr);
printf("\n");
printArray(arr);
printf("\n");
overDiagonal(arr);
printf("\n");
}
