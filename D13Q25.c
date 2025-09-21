// Q25 Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() {
int a,b,result;
char c;
printf( "ENTER a,b,c ");
scanf(" %d %d %c", &a,&b,&c );
switch(c) {
case '+':
result = a + b;
break;
case '-':
result = a - b;
break;
case '*':
result = a * b;
break;
case '/':
result = a/b;
break;
case '%':
result = a % b;
break; }
printf( " %d\n ", result);
return 0; 



}
