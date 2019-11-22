#include <stdio.h>
#define MAXLINE 50
int max;
char line[MAXLINE];
char longest[MAXLINE];
main()
{
    int count_letter=0;
    int count_dight=0;
    int count_tab=0;
    int count_space=0;
    int c;
    while((c=getchar())!=EOF)
    {
        if(c=='字母'){
            ++count_letter;
        }
        if(c=='数字'){
            ++count_dight;
        }
        if(c=='\t'){
            ++count_tab;
        }
        if(c==' '){
            ++count_space;
        }
    printf("%d字母%d数字%d\t%d ");
}