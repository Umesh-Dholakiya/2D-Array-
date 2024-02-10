#include<stdio.h>

main()
{
	
	int rows,cols,i,j,sum=0;
	
	printf("Enter number of row :- ");
	scanf("%d", &rows);
	
	printf("Enter number of colums :- ");
	scanf("%d", &cols);
	
	int a[rows][cols];
	int b[rows][cols];
	
	printf("Enter array A's elements :\n");
	for(i = 0; i < rows; i++){
		
		for(j = 0; j < cols; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("Enter array B's elements :\n");
	for(i = 0;i < rows ;i++){
		
		for(j = 0; j < cols;j++){
			
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	
	printf("Array C is : \n");	
	for(i = 0; i < rows ; i++){
		for(j = 0; j < cols; j++){
			sum = a[i][j] + b[i][j];
			printf("%d  " ,sum);
		}
		printf("\n");
	}	
	
}
