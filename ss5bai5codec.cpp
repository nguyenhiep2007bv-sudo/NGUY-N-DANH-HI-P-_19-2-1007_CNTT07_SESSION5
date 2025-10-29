#include<stdio.h>
#include<math.h>
//tinh gia ve xe buyt theo do tuoi hanh khach

int main(){
	int a ;
	printf("Tuoi cua ban :");
	scanf("%d",&a);
	if (a<6){
		printf("Mien phi\n");
	}
	else if (a>=6&&a<=18){
		printf("Gia ve cua ban :%.2f VND\n",20000.0/2);
	}
	else if (a>=19&&a<=60){
		printf("Gia ve cua ban : 20000 VND\n");
	}
	else if (a>60){
		printf("Gia ve cua ban :%.2f VND\n",20000*70.0/100);
	}
	else if (a<0||a>100){
		printf("Loi\n");
	}

}

