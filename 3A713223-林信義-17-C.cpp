#include <stdio.h>　
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 

int main(int argc, char *argv[]) {
	int a[5]={0};
	int i=0, min;
	
	printf("請輸入五個數字：\n");

	for(i=0;i<5;i++) {
	   printf("第%d筆資料：", i+1 );
	   scanf("%d", &a[i]);
	}
	
	min=a[0];

	for(i=0;i<5;i++) {
	  if (min>a[i])	{
		  min=a[i];
	  }
	}
	
	printf("最小值是：%d\n\n",min); 
	
	system("PAUSE");	
	return 0;
}


