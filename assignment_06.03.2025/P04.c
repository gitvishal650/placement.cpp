//WAP to input a string and print length of it
#include<stdio.h>
#include<string.h>
main(){
	char name[20];
	printf("Enter your name :");
	scanf("%s",name);
	int length=strlen(name);
	printf("Name length is :%d",length);
}
