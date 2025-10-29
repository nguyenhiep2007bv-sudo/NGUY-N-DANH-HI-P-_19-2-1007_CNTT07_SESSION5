#include<stdio.h>
//giai phuong trinh bac nhat
int main(){
	float a,b;
	printf("Phuong trinh ax+b=0\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	if (a==0&&b==0){
		printf("Phuong trinh co vo so nghiem \n");
	}
	else if (a==0&&b!=0){
		printf("Phuong trinh vo nghiem \n");
	}
	else if (a!=0){
		printf("Phuong trinh co nghiem duy nhat : %.2f",-b/a);
	}

}

