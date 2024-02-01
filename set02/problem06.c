#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("enter a string:");
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
}
void str_reverse(char *str,char *rev_str)
{
    int len = strlen(str);
    for(int i=len-1,j=0;i>=0;i--,j++)
    {
        rev_str[j]=str[i];
    }
    rev_str[len]='\0';
}
void output(char *a,char *reverse_a)
{
    printf("the original string is: %s\n",a);
    printf("the reversed string is: %s\n",reverse_a);
}
int main()
{
    char a[100],reverse_a[100];
    input_string(a);
    str_reverse(a,reverse_a);
    output(a,reverse_a);
    return 0;
}