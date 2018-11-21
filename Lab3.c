#include <math.h>
#include <stdio.h>
#define rows 5 
#define cols 5 

void inputUnsortedArray(int Matrix5x5[][cols]){
   for(int rowNumber=0; rowNumber <5; rowNumber++){
       for(int columnNumber=0; columnNumber <5; columnNumber++){
           printf("¬вед≥ть елемент матриц≥ Matrix5x5[%d][%d] ", rowNumber, rowNumber);
           printf("\n");
           scanf("%d",&Matrix5x5[rowNumber][columnNumber]);
       }
   }
}

void bubbleSortArray(int Matrix5x5[][cols]){
int rowNumber, columnNumber, Iteration, additionalArray;
for (Iteration =0; Iteration <j; Iteration++){
   for (columnNumber = 0; columnNumber < rows -1; columnNumber++){
       for (rowNumber = 0; rowNumber <= cols-1; rowNumber++){
           if (Matrix5x5[rowNumber][columnNumber] < Matrix5x5[rowNumber][columnNumber +1]){
               x = Matrix5x5[rowNumber][columnNumber];
			   Matrix5x5[rowNumber][columnNumber] = mass[rowNumber][columnNumber +1];
			   Matrix5x5[rowNumber][columnNumber +1] = additionalArray;
           }
       }
   }
}
}


void printSortedArray(int Matrix5x5[][cols]){
int columnNumber, rowNumber;
for(columnNumber = 0; columnNumber < 5; columnNumber++){
    for(rowNumber = 0; rowNumber  < 5; rowNumber++){
    printf("%4.1d ¬≥дсортована матриц€ маЇ вигл€д: \n", Matrix5x5[columnNumber][rowNumber]);
}
printf("\n");
}
}


void printSumOverMainDiagonal( int Matrix5x5[][cols]) {
    int sumsOverMainDiagonal [4] = {1, 1, 1, 1};
    int sumOfSumsOverDiag = 0;

    for(int columnNumber = 0; columnNumber < 5; columnNumber++){
        for(int rowNumber = 0; rowNumber < 5 - columnNumber; rowNumber++){
			sumsOverMainDiagonal [columnNumber] = sumsOverMainDiagonal [columnNumber] * Matrix5x5[rowNumber][columnNumber];
    }
    }
    for(int rowNumber=0; rowNumber < 4; rowNumber++){
		sumsOverMainDiagonal[rowNumber] = pow(sumsOverMainDiagonal[rowNumber],(1.0/(4- rowNumber)));
        printf("%d ", sumsOverMainDiagonal[rowNumber]);
		sumOfSumsOverDiag += sumsOverMainDiagonal[rowNumber];
    }
    printf("\n");
    printf("—ума середн≥х геометричних значень дор≥внюЇ = %d ", sumOfSumsOverDiag);
}


void main(void){
int Matrix5*5 [i][j] = {0};
    
int *array = Matrix5*5;
inputUnsortedArray(array);
bubbleSortArray(array);
printf("\n");
printSortedArray(array);
printf("\n");
printSumOverMainDiagonal(array);
printf("\n");
}