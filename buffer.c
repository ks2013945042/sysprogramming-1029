#include<stdio.h>

void main()
{
	int x, count, i;
	char y;
	int index = 0;

	printf("반복 횟수 입력: ");
	scanf("%d", &count);
	while(index != count){
		printf("문자와 출력 횟수 입력: ");
		
		scanf(" %c %d", &y, &x);
		printf("당신은 %c와 %d을 입력했습니다. ", y, x);
		for(i = 0; i < x; i++){
			printf("%c", y);
		}
		printf("\n");
		index++;
	}
}
