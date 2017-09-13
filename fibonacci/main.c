//
//  main.c
//  fibonacci recursive program
//
//  Created by AYUSHI MITTAL on 13/09/17.
//  Copyright © 2017 AYUSHI MITTAL. All rights reserved.
//

#include <stdio.h>

int fib (int n ) {
    if(n<2){
        return n;
    }
    else {
        return (fib(n-1)+fib(n-2));
        
    }

}
int main(int argc, const char * argv[]) {
    int n,i;
    printf("enter no. of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     printf("%d\t",fib(i));
    printf("\n");
    return 0;
}
