// WAP to input a string and print that string in upper case, lowercase, reverse case, sentence case and toggle case
#include<stdio.h>
#include<ctype.h>
main(){
	char str[20],str1[20],str2[20];
	int i=0,j=0;
	printf("Enter a String :");
	gets(str);
	while(str[i]!='\0'){
		str1[i]=toupper(str[i]);
		i++;
	}
	while(str[j]!='\0'){
		str2[j]=tolower(str[j]);
		j++;
	}
	printf("Uppercase :%s\n",str1);
	printf("Lowercase :%s",str2);
}
