#include<stdio.h>
/*
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/
void  main(){
    
	char str[10];
	int *ptr;
	int *p;
	int len;
	
	printf("Enter any string: ");
    gets(str);
    
   
    ptr=&str;

    len=strlen(ptr);
    p=&len;

    printf("The length of the string is: %d", *p);
}
