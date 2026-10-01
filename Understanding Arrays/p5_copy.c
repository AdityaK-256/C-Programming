//IMPORTANT
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20], t[20];
    printf("Enter string");
    fgets(s,sizeof(s),stdin);
    //copy s into t
    int i = 0;
    while(s[i]!='\0')
    {
        t[i]=s[i];
        i++;
    }
    // append ‘\0’ at the end of t
    t[strcspn(t,"\n")]='\0';//imp step because if we don't append '\0' here then using t 
              //in further program or operation will cause error because they 
              //won't know where the string is ending.
    puts(t);
    printf("%zu\n",strlen(t));//or %lu
}