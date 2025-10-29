#include<stdio.h>
#include<math.h>


int main(){
	char kitu;
	printf("Nhap vao ki tu :");
	scanf("%c",&kitu);
	if (kitu>='a'&&kitu<='z'){
		printf("Chu hoa tuong ung : %c\n",kitu-32);
	}
	else if (kitu>='A'&&kitu<='Z'){
		printf("Chu thuong tuong ung : %c\n",kitu+32);
	}
	else{
		printf("Khong phai chu cai \n");
	}
}

