#include <stdio.h>
//함수의 매개변수로서의 변수와 배열(함수로 변수 복사 성공버전)
int a1; //전역변수로 선언
int b1;
void copy_array(int a[], int b[], int len)
{
    int i;
    for(i = 0; i < len; i++)
        b[i] = a[i];
}
void copy_variable(int a, int b)
{
    b1 = a1; //전역변수가 같게 해주는 함수
    b = a; //b를 a로 만들고 싶다면, 선언한 곳에서 값을 확인, 아니면 변수를 같게해주도록 함수 작성
    printf("변수 복사 결과 : a = %d, b = %d\n", a, b);
}
int main()
{
    int A[5] = {10,20,30};
    int B[5];
    int i;
    a1 = 100;
    b1 = 0;

    copy_variable(a1,b1);
    copy_array(A, B, 5);

    printf("변수 복사 결과 : a1 = %d, b1 = %d\n", a1, b1);
    printf("배열 복사 결과 : \n");
    for(i = 0; i < 5; i ++){
        printf("A[%d] = %d\t", i, A[i]);
        printf("B[%d] = %d\n", i, B[i]);
    }
    return 0;

}