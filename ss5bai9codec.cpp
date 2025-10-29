#include<stdio.h>
#include<string.h>

int main(){
	//phu cap 
	char phucap[10];
	printf("Chuc vu cua ban :\n");
	printf("1. Nhan vien \n");
	printf("2.To truong \n");
	printf("3.Quan li \n");
	printf("Chon :");
	scanf("%s",&phucap);
	if (strcmp(phucap,"1")==0){
		float hesoluong;
		printf("He so luong :");
		scanf("%f",&hesoluong);
		int songaycong;
		printf("So ngay cong :");
		scanf("%d",&songaycong);
		if(songaycong>26){
			int thuong = (songaycong-26)*200000;
			float luong= songaycong*160000*hesoluong+500000+thuong;
			printf("Luong cua ban : %.2f VND",luong);
		}
		else{
			float luong=songaycong*160000*hesoluong+500000;
			printf("Luong cua ban :%.2f VND",luong);
		}
	
	}
	else if (strcmp(phucap,"2")==0){
		float hesoluong;
		printf("He so luong :");
		scanf("%f",&hesoluong);
		int songaycong;
		printf("So ngay cong :");
		scanf("%d",&songaycong);
		if(songaycong>26){
			int thuong = (songaycong-26)*200000;
			float luong= songaycong*160000*hesoluong+1000000+thuong;
			printf("Luong cua ban : %.2f VND",luong);
		}
		else{
			float luong=songaycong*160000*hesoluong+1000000;
			printf("Luong cua ban :%.2f VND",luong);
		}
	}
	else if (strcmp(phucap,"3")==0){
		float hesoluong;
		printf("He so luong :");
		scanf("%f",&hesoluong);
		int songaycong;
		printf("So ngay cong :");
		scanf("%d",&songaycong);
		if(songaycong>26){
			int thuong = (songaycong-26)*200000;
			float luong= songaycong*160000*hesoluong+2000000+thuong;
			printf("Luong cua ban : %.2f VND",luong);
		}
		else{
			float luong=songaycong*160000*hesoluong+2000000;
			printf("Luong cua ban :%.2f VND",luong);
		}
	}
	

}

