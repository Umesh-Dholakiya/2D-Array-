#include<stdio.h>

main()
{
	int rows,cols,i,j;
	float sum=0;
	
	
	printf("Enter number of row :- ");
	scanf("%d",&rows);
	
	printf("Enter number of colums :- ");
	scanf("%d",&cols);
	
	int a[rows][cols];
	
	for(i = 0; i < rows; i++){
		
		for(j = 0; j < cols; j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i = 0;i < rows; i++){
	 	for(j = 0;j < cols; j++){
	 			sum += a[i][j]; 	
		 }
	
	}
		
	sum = sum / (rows * cols);
	printf("Average of an Array: %.2f" ,sum);
	
}
