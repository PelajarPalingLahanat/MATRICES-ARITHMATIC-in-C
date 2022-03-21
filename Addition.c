//MATRIX ADDITION
#include <stdio.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])

void func(){

}

int main(){
	printf("ROW : -------->\n");
	printf("COLOMN : |\n");
	printf("         |\n");
	printf("         |\n");
	printf("       __|__\n");
	printf("       \\   /\n");
	printf("        \\ /\n");
	printf("         %c\n",31);
	//ASKING THE DIMENSIONS
	int row_m1,column_m1,row_m2,column_m2;
	printf("Enter Matrix 1 row : ");
	scanf("%d",&row_m1);
	printf("Enter Matrix 1 column : ");
	scanf("%d",&column_m1);
	printf("Enter Matrix 2 row : ");
	scanf("%d",&row_m2);
	printf("Enter Matrix 2 column : ");
	scanf("%d",&column_m2);
	//ERROR MESSAGE
	if(row_m1 != row_m2 || column_m1 != column_m2) {
		printf("\n\n<< ERROR MESSAGE >>\n\nSorry not possible to do this Matrix addition\nThis program will exit\n\n<< END ERROR MESSAGE >>\n");
		return 0;

}
	//MATRIX DECLARATION
	int matrix1[row_m1][column_m1];
	int matrix2[row_m2][column_m2];
	int matrix3[row_m1][column_m1];
	//INPUT ELEMENTS IN THE ARRAY FOR MATRIX 1
	int a,j,i;
	printf("====+ MATRICES 1 +====\n\n");
	for(i = 0; i < row_m1;i++){
		for(j = 0; j < column_m1;j++){
			printf("Enter Matrix1[%d][%d] elements : ",i + 1,j + 1);
			scanf("%d",&a);
			matrix1[i][j] = a;
		}
		printf("\n");
	}

	printf("====+ MATRICES 2 +====\n\n");
	for(i = 0; i < row_m2;i++){
		for(j = 0; j < column_m2;j++){
			printf("Enter Matrix2[%d][%d] elements : ",i + 1 ,j + 1);
			scanf("%d",&a);
			matrix2[i][j] = a;
		}
		printf("\n");
	}
	printf("CONFIRMATION MATRIX1\n");
	for(i = 0; i < row_m1;i++){
		printf("[ ");
		for(j = 0; j < column_m2;j++){
			printf("%3d ",matrix1[i][j]);
		}
		printf(" ]\n");
	}

	printf("CONFIRMATION MATRIX2\n");
	for(i = 0; i < row_m1;i++){
		printf("[ ");
		for(j = 0; j < column_m2;j++){
			printf("%3d ",matrix2[i][j]);
		}
		printf(" ]\n");
	}

	for(i = 0;i < row_m1;i++){
		for(j = 0;j < column_m1;j++){
			matrix3[i][j] = matrix2[i][j] + matrix1[i][j];
		}
	}
	printf("\nRESULT OF MATRIX1 + MATRIX2\n");
	for(i = 0; i < row_m1;i++){
		printf("[ ");
		for(j = 0; j < column_m2;j++){
			printf("%3d ",matrix3[i][j]);
		}
		printf(" ]\n");
	}
	return 0;


}
