#include<stdio.h>
#include<stdlib.h>
#include<time.h>	
void main() {
	int figure,guess;		//��������������������
	srand(time(0));			//���������ʼ�������������ʱ��ı���ı�
	figure = rand() % 101;	//����һ�����ڵ��������
	printf("���������Ĳ�����");
	while (1) {
		scanf_s("%d", &guess);
		if (guess == figure) {		//�жϲ����Ƿ��������һ��
			printf("�������ˣ�");	//�������������һ����ʱ���������
			break;
		}
		else if (guess > figure) {
			printf("�������ˣ�");
			continue;
		}
		else if (guess < figure) {
			printf("����С�ˣ�");
			continue;
		}

	}
	printf("%d", figure);
}