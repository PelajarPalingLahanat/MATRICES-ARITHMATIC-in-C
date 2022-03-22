//INVERSE 2x2 MATRICES
//TEMPLATE
#include <stdio.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])
#define neg(x) x - 2.0 * x

//Inverse Matrics

void func(){

}
/*
[ a   b ]
[ c   d ]

*/
//	INVERSE 2 x 2 MATRICES
int main(){
	float arr[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2;j++){
			printf("Enter Elements for [%d][%d] : ",i + 1,j + 1);
			scanf("%f",&arr[i][j]);
		}
		printf("\n");
	}
	if(arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0] == 0.0){
		printf("ERROR\nNot possible\nProgram will exit\n");
		return 0;
	}
	float var = 1 / (arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0]);
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2;j++){
			arr[i][j] = arr[i][j] * var;
		}
	}
	for(int i = 0; i < 2; i++){
		printf("[  ");
		for(int j = 0; j < 2;j++){
			if(i == 0 && j == 0) printf("%.2f  ",arr[1][1]);
			else if(i == 1 && j == 1) printf("%.2f  ",arr[0][0]);
			else printf("%.2f  ",neg(arr[i][j]));
		}
		printf("  ]\n");
	}
	//printf("%f",var);
	return 0;
}
