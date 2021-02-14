#include "matrix_dynamic.h"

int main() 
{
	int r,c,x;
	printf("Number of rows'\n");
	scanf("%d",&r);
	printf("Number of columns\n");
	scanf("%d", &c);
	matrix a, trans;
	a= create_empty(r,c);
	printf("Insert the value of your matrix pls\n");
	for(int i=0;i<r;i++){
		for(int j=0; j<c;j++){
			printf("Enter the elements a%d%d: ",i+1,j+1);
			scanf("%d", &x);
			assign(i,j, &a ,x);
		}
	}
       	printf("\nMatrix a:");
	matrix_print(a);
	trans= matrix_transpose(a);
	printf("\nTranspose of a:");
	matrix_print(trans);
	return 0;
}
