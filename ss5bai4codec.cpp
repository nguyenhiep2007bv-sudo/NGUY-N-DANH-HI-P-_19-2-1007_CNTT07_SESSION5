#include<stdio.h>
#include<math.h>
//tinh thue thu nhap ca nhan

int main(){
	float a ;
	printf("Muc thu nhap 1 thang (trieu VND):");
	scanf("%f",&a);
	if(a<=5){
		printf("Thue phai dong = %.2f VND",a*(5.0/100));
	}
	else if (a>5&&a<=10){
		printf("Thue phai dong =%.2f VND",a*(10.0/100));
	}
	else if (a>10){
		printf("Thue phai dong = %.2f VND",a*(15.0/100));
	}

}

