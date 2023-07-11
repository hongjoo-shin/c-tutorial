/* if - else 문 이란? */
#include <stdio.h>
int main() {
    int num;
    printf("입력하고 싶은 숫자를 입력하세요! : ");
    scanf("%d", &num);

    if(num == 7) {
        printf("당신은 행운의 숫자 7을 입력했습니다.\n");
    } else {
        printf("그냥 보통 숫자인 %d를 입력했군요. \n", num);
    }
    return 0;
}