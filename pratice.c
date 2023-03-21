#include<stdio.h>
#include<stdlib.h>
#include<time.h>	
void main() {
	int figure,guess;		//定义随机变量和输入变量
	srand(time(0));			//随机变量初始化，随机变量随时间改变而改变
	figure = rand() % 101;	//定义一百以内的随机变量
	printf("请输入您的猜数：");
	while (1) {
		scanf_s("%d", &guess);
		if (guess == figure) {		//判断猜数是否与随机数一样
			printf("您猜中了！");	//当猜数与随机数一样的时候输出猜中
			break;
		}
		else if (guess > figure) {
			printf("该数大了！");
			continue;
		}
		else if (guess < figure) {
			printf("该数小了！");
			continue;
		}

	}
	printf("%d", figure);
}