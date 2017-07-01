//
//  lib.c
//  separate_files
//
//  Created by ishikawatakatsugu on 2017/07/01.
//  Copyright © 2017年 simultechnology. All rights reserved.
//

#include "lib.h"

void exchange(int a[], int i) {
    int x;
    x = a[i + 1];
    a[i + 1] = a[i];
    a[i] = x;
}
