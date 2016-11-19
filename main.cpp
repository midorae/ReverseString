//
//  main.cpp
//  ReverseString
//
//  Created by 이창기 on 2016. 11. 19..
//  Copyright © 2016년 이창기. All rights reserved.
//

#include <iostream>
#include <string.h>

#define MAX 256

void reverse(char *str, int length);


int main(int argc, const char * argv[])
{
    char str[MAX];
    
    std::cin >> str;
    
    std::cout << "BEFORE : " << str << std::endl;
    
    reverse(str, (int)strlen(str));
    
    std::cout << "AFTER : " << str << std::endl;
    
    return 0;
}

void reverse(char *str, int length)
{
    int mid = length/2;
    
    char temp;

    for(int i = 0; i<mid; i++)
    {
        temp = str[i];
        str[i] = str[(length-1)-i];
        str[(length-1)-i] = temp;
    }
}
