#include <stdio.h>
#include <stdlib.h>

int main()
{
// guys explain pointers pls what the fuck
// i DON'T understand that
int age = 5;
int *pAge = &age;

//printf("%d\n", age );       -> 5
//printf("%p\n", age );       -> 00000005

//printf("%d\n", &age );      -> 6422296
//printf("%p\n", &age );      -> 0061FF18

//printf("%d\n", *&age );     -> 5
//printf("%p\n", *&age );     -> 00000005

//printf("%d\n", pAge );      -> 6422296
//printf("%p\n", pAge );      -> 0061FF18

//printf("%d\n", *pAge );     -> 5
//printf("%p\n", *pAge );     -> 00000005

//printf("%d\n", *&pAge );    -> 6422300         ???
//printf("%p\n", *&pAge );    -> 0061FF1C        ???


  return 0;
}
