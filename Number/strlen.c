//
//  strlen.c
//  Number
//
//  Created by Crystal on 2017/4/23.
//  Copyright © 2017年 Crystal. All rights reserved.
//

#include "strlen.h"

int len( char *string){
    int length = 0;
    
    while (*string++ != '\0') {
        length += 1;
    }
    return length;
}
