//
//  main.c
//  separate_files
//
//  Created by ishikawatakatsugu on 2017/07/01.
//  Copyright © 2017年 simultechnology. All rights reserved.
//

#include <stdio.h>
#include "compare.h"

int main(int argc, const char * argv[]) {
    
    printf("start!\n");

    int a[5] = {5, 3, 4, 2, 1};
    int chaged;
    
    chaged = 1;
    while (chaged == 1) {
        printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
        chaged = compare(a, 5);
    }
    
    return 0;
}
