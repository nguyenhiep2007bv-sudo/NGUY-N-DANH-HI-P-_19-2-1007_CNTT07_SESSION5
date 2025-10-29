#include<stdio.h>
#include<math.h>
//phan loai hoc luc tren diem trung binh

int main(){
	float a;
	printf("Nhap diem trung binh : ");
	scanf("%f",&a);
	if (a<0||a>10){
		printf("Diem trung binh khong hop le \n");
	}
	else if (a>=8){
		printf("Hoc luc gioi\n");
	}
	else if (a>=6.5){
		printf("Hoc luc kha \n");
	}
	else if (a>=5){
		printf("Hoc luc trung binh \n");
	}
	else if (a<5){
		printf("Hoc luc yeu\n");
	}

}

