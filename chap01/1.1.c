#include<stdio.h>
int main()
{
    int find_array_max(int score[],int n) //자료구조 : 배열 score, n은 배열길이
    {
        int i, tmp = score[0];
        for(i = 1; i < n; i++)
        { //알고리즘
            if(score[i] > tmp){
                tmp = score[i];
            }
        }
        return tmp;        
    }
    return 0;
}