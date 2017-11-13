//
//  main.c
//  ValueOfCharacter
//
//  Created by Eun Jae Lee on 13/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char firstName;
  
    printf("Enter your full name: \n");
    scanf("%s \n",&firstName);
    
    printf("Hi %s\n",&firstName);
    printf("How can I help you %s? \n",&firstName);
    
    printf("ASCII valjue of %c is %d\n", firstName, firstName);
   // getch();
    
    return 0;
}
