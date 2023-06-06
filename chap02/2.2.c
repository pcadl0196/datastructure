#include <stdio.h>
//함수의 매개변수로서의 변수와 배열
void copy_array(int a[],int b[], int len) //배열을 복사하는 함수
{
    int i;
    for(i = 0; i < len; i++) //배열의 길이만큼 배열 복사
        b[i] = a[i];
}
void copy_variable(int a, int b) //변수를 복사하는 함수
{
    b = a;
}

int main()
{
    int A[5] = {10, 20, 30}; //배열 선언
    int B[5], i, x = 2018, y = 0; //int형 변수들 모두 선언

    copy_variable(x, y); //함수를 이용한 변수 복사(실패함)
    copy_array(A, B, 5); //함수를 이용한 배열 복사(성공)

    printf("변수 복사 결과 : x = %d, y= %d\n", x, y);
    printf("배열 복사 결과 : \n");
    for(i = 0; i < 5; i++){
        printf("A[%d] = %d\t", i, A[i]);
        printf("B[%d] = %d\n", i, B[i]);
    }
    return 0;
}