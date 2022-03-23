//TEMPLATE
#include <stdio.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])
// 0 is false 1 is true
//SINGLE NUMBER MATRICES MULTIPLICATION


void func(){

}

int main(){
  int row,column;
  printf("Enter the amount of row : ");
  scanf("%d",&row);
  printf("Enter the amount of column : ");
  scanf("%d",&column);
  float number;
  float arr[row][column];
  for (int i = 0; i < row;i++) {
    for (int j = 0;j < column;j++) {
      printf("Enter the element for [%d][%d] : ",i + 1,j + 1);
      scanf("%f",&arr[i][j] );
    }
    printf("\n");
  }
  printf("Enter the number that you want to multiply with the Matrices : ");
  scanf("%f",&number);
  printf("<< Array Confirmation >>\n");
  for(int i = 0; i < row;i++){
    printf("[  ");
    for(int j = 0; j < column;j++){
      printf("%.3f  ",arr[i][j]);
    }
    printf("  ]\n");
  }
  printf("\n");
  for(int i = 0; i < row;i++){
    for(int j = 0; j < column;j++){
      arr[i][j] = number * arr[i][j];
    }
  }
  printf("<< RESULT >>\n");
  for(int i = 0; i < row;i++){
    printf("[  ");
    for(int j = 0; j < column;j++){
      printf("%.3f  ",arr[i][j]);
    }
    printf("  ]\n");
  }


return 0;
}
