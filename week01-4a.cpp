/// week04-a.cpp �ϥ�C�y���g
#include <stdio.h> /// �ϥ� C�y�� �~��

int main()
{
        int a, b;
        scanf("%d %d", &a, &b); /// �ϥ� C�y�� Ū���
        int ans = 0;
        for(int i=a; i<=b; i++){
            if( i%3==0 ) ans +=i;
        }
        printf("%d ", ans); /// �ϥ� C�y�� �L���
}
