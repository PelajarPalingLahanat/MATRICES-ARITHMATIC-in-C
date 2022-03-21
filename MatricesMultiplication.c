//BETWEEN MATRICES WITH MATRICES ONLY
//TEMPLATE
#include <stdio.h>

void func(){

}

int main(){
	int matrix1_row,matrix1_column,matrix2_row,matrix2_column;
	printf("Enter MATRIX_1 row : ");
	scanf("%d",&matrix1_row);
	printf("Enter MATRIX_1 column : ");
	scanf("%d",&matrix1_column);
	printf("Enter MATRIX_2 row : ");
	scanf("%d",&matrix2_row);
	printf("Enter MATRIX_2 column : ");
	scanf("%d",&matrix2_column);
	int matrix1[matrix1_row][matrix1_column];
	int matrix2[matrix2_row][matrix2_column];
	int matrix3[matrix1_row][matrix2_column];

	if(matrix1_column != matrix2_row){
		printf("\n\nERROR < PROGRAM WILL EXIT NOW >");
		return 0;
	}
	int i,j;
	printf("===+ MATRIX 1 +===\n");
	for(i = 0; i < matrix1_row;i++){
		for(j = 0;j < matrix1_column;j++){
			printf("Enter Matrix1[%d][%d] : ",i + 1,j + 1);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n");
	}
	printf("===+ MATRIX 2 +===\n");
	for(i = 0; i < matrix2_row;i++){
		for(j = 0;j < matrix2_column;j++){
		printf("Enter Matrix2[%d][%d] : ",i + 1,j + 1);
			scanf("%d",&matrix2[i][j]);
		}
		printf("\n");
	}

	printf("===+ MATRIX 1 +===\n");
	for(i = 0; i < matrix1_row;i++){
		printf("[  ");
		for(j = 0; j < matrix1_column;j++){
			printf("%4d",matrix1[i][j]);
		}
		printf("    ]\n");

	}

		printf("===+ MATRIX 2 +===\n");
		for(i = 0; i < matrix2_row;i++){
			printf("[  ");
			for(j = 0; j < matrix2_column;j++){
				printf("%4d",matrix2[i][j]);
			}
			printf("    ]\n");
		}

		for(i = 0;i < matrix1_row;i++){
			for(j = 0; j < matrix2_column;j++){
				int z = 0;
				for(int s = 0;s < matrix1_column;s++)z = z + matrix1[i][s] * matrix2[s][j];
				matrix3[i][j] = z;
			}
		}
		printf("RESULT :\n\n");
		for(i = 0; i < matrix1_row;i++){
			printf("[  ");
			for(j = 0; j < matrix2_column;j++){
				printf("%4d",matrix3[i][j]);
			}
			printf("   ]\n");
		}
	return 0;
}
