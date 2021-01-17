///skonczone

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int main(){
    int array1[ROW][COL] = {{0,0,0},{0,1,0},{0,0,0}};
    int array2[ROW][COL] = {{0,0,0},{0,1,0},{0,0,0}};
    int array3[ROW][COL];
    for(int i = 0; i < ROW; i++){
        for(int j= 0; j<COL; j++){
            array3[i][j]=array1[i][j]+array2[i][j];
    }}
    for(int i = 0; i < ROW; i++){
        for(int j= 0; j<COL; j++){
            printf("%d ",array3[i][j]);
    } printf("\n");
    }
    return 0;
}
