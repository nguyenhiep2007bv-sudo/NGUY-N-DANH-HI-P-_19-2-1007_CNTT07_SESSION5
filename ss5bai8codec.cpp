#include<stdio.h>
#include<math.h>


int main(){
	float a;
	printf("So nuoc tieu thu : ");
	scanf("%f",&a);
	if ( 0<a&&a<=10){
		printf("Gia tien : %.2f",6000*a);
	}
	else if (11<=a&&a<=20){
		printf("Gia tien :%.2f",6000*10+(a-10)*7000);
	}
	else if (21<=a&&a<=30){
		printf("Gia tien :%.2f",60000+70000+(a-20)*8500);
	}
	else if (a>30){
		printf("Gia tien :%.2f",60000+70000+85000+(a-30)*10000);
	}

}

