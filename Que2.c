#include<stdio.h>
/*
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27    8
125 64
*/
int cube(int *ptr){

   ptr=&cube;
   return *ptr;
}
void main(){
	
	int n,i,j;
	int a[n][n];
	printf("Enter the array size:");
	scanf("%d",&n);

	int cube=0;
	int *ptr;

	printf("Enter the array element:");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
        
		printf("Enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		
		cube=a[i][j]*a[i][j]*a[i][j];
		
		ptr=&cube;
		
		printf("cube of all elements:%d\n\n",*ptr);
	                    }
                    }
            }
