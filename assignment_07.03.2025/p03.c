/* WAP to input user id and password. Show the password character as $. Match the user id as drbpsharma and 
password as 123456. If authentication passed print "Welcome to Secure System"else print "Authentication Failed" */

#include<stdio.h>
#include<string.h>
main(){
    char id[20], pass[6], ppass[] = "123456", pid[] = "drbpsharma";
    int i = 0;
    printf("Enter User ID: ");
    gets(pass);
    printf("Enter Password: ");
    while (ppass[i]) {
        pass[i] = getchar();
        putchar('$');
        i++;
    } 
    if (strcmp(pass, ppass) == 0 && strcmp(id, pid) == 0)
        printf("\nWelcome to Secure System\n");
    else
        printf("\nAuthentication Failed");
}
