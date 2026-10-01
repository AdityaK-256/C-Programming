#include <stdio.h>
#include <string.h>
int main()
{
char str1[20]="JIIT", str2[20];
printf("%d\n",strlen(str1)); //should use %zu or %lu //It will print 4
strcpy(str2,str1); //it will copy str1 into str2
puts(str2); // it will print “JIIT”
strcat(str1,str2); // it will append str2 at the end of str1
puts(str1); // it will print “JIITJIIT”
return 0;
}