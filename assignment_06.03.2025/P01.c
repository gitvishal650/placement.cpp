// WAP to input a number and check it to be prime number
#include<stdio.h>
int main(){
	int n;
	bool flag=true;
	printf("Enter a number :");
	scanf("%d%*c",&n);
	if(n<=1){
		flag=false;
	}
	for(int i=2; i<=n;i++){
		if(n%i==0){
			flag=false;
			break;
		}
		else{
		flag=true;
		break;
		}
	}
	if(flag==true){
		printf("Number is Prime");
	}
	else{
		printf("Number is not Prime");
	}
}
