//
//  main.c
//  A+B
//
//  Created by 20161104613 on 2017/6/7.
//  Copyright © 2017年 20161104613. All rights reserved.
//

#include <stdio.h>

int main()
{
    int A,B;
    printf("请输入A，B：\n");
    while(scanf("%d %d",&A,&B)!=EOF)
    {
        printf("%d\n",A+B);
    }
    return 0;
}
