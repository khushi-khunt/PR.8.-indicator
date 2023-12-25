#include<stdio.h>
/*
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/
void  main(){
    
	char str[100];
	int i,a=0;
	
	printf("Enter any string: ");
    gets(str);
    
    char *ptr;
    ptr=&str;

   for(i=0;str[i]!='\0';i++){
        a++;
        ptr++;
    }
    printf("The length of the string is: %d", a);
}
