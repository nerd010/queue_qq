//
//  main.c
//  Queue_qq号
//
//  Created by 王增康 on 16/1/23.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int main() {
    int q[102] = {0,6,3,1,7,5,8,9,2,4},head,tail;
    head = 1;
    tail = 10;
    while (head < tail)
    {
        printf("%d",q[head]);
        head++;
        
        q[tail] = q[head];
        tail++;
        head++;
    }
    
    getchar();getchar();
    
    
    return 0;
}
