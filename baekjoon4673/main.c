//
//  main.c
//  baekjoon4673
//
//  Created by 이승섭 on 2018. 11. 6..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int dn(int n)
{
    int dn = n;
    
    while (n > 0)
    {
        dn += n % 10;
        n = n/10;
    }
    return dn;
}

int arr[10000];
int main(void)
{
    for(int n = 1; n <= 10000; n++)
    {
        arr[dn(n)] = 1;
        if(!arr[n])
            printf("%d \n", n); // 배열의 index 중 1이 아닌 값(0)이 저장되어 있는 index를 출력
    }
    return 0;
}
