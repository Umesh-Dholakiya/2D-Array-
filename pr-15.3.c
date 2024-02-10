#include<stdio.h>

main()
{

	int n,i,j,sum=0;
	
	printf("Enter the array's row & column size : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("Enter array's elements : \n");
	for(i = 0; i < n ; i++){
		
		for(j = 0; j < n ;j++){
			
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i = 0;i < n ; i++){
		for(j = 0; j < n; j++){
			
			if(i == j){	
				sum += a[i][j];
			}
		}
	}
	printf("\nThe sum of diagonal elements of an Array : %d", sum);
}




