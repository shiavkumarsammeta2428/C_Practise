


#include<stdio.h>

void main(){
	printf("Hello_world\n");
	printf("Second_from_code\n\n");

	int tarr[5][3];

	for(int i=0;i<5;i++){

		for(int j=0;j<3;j++){

			printf("\nIntput the index arr[%d][%d]:",i,j);
			scanf("%d",&tarr[i][j]);
		}

	}

	printf("The output \n");

	for(int i=0;i<5;i++){

		for(int j=0;j<3;j++){

			printf("%d ",tarr[i][j]);
		}
		printf("\n");
	}


}


