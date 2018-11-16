//
//  main.c
//  test_C_ClassWork
//
//  Created by s20171106574 on 2018/11/16.
//  Copyright © 2018 s20171106574. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    for(j=0;j<=i;j++)
    {
        k=pow(3,j);
        printf("pow(3,%d) = %d\n",j,k);
    }
    return 0;
}
