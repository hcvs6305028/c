#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, num;
		   printf("請輸入數值\n 1.\n 2.\n");
	scanf("%d" ,&a);
	scanf("%d" ,&b);
        int num1=a+b,num2=a-b,num3=a*b,num4=a/b;
	   printf("請輸入數值\n 1.+ \n 2.-\n 3.*\n 4./ \n");
	   scanf("%d", &num );
	switch (num)
	{
		case 1:
			printf("%d+%d=%d",a ,b,a+b);break;
		case 2:
			printf("%d-%d=%d",a ,b,a-b);break;
		case 3:
			printf("%d*%d=%d",a ,b,a*b);break;
		case 4:
			printf("%d/%d=%d",a ,b,a/b);break;
	}
	return 0;
}
