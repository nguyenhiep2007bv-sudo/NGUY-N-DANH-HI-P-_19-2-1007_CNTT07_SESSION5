#include<stdio.h>
//so sanh hai so nguyen
int main(){
	int a,b,temp;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if (a>b){
		printf("So lon hon la :%d",a);
	}
	else if (b>a){
		printf("So lon hon la :%d",b);
	}
	else 
		printf("Hai so bang nhau ");

}

