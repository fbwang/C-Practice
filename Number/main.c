//
//  main.c
//  Number
//
//  Created by Crystal on 2017/4/23.
//  Copyright © 2017年 Crystal. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int ch;
    int line;
    int at_beginning;
    
    line = 0;
    at_beginning = 1;
    /*
     ** Read charactor and handle them one by one
     */
    
    while ((ch = getchar()) != EOF) {
        if (at_beginning == 1) {
            at_beginning = 0;
            line += 1;
            printf("%d:\t", line);
        }
        
        putchar(ch);
        if (ch == '\n') {
            at_beginning = 1;
        }

    }
//    printf("Hello, World!\n");
    return 0;
}
