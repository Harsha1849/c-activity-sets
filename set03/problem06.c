#include<stdio.h>
#include<string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char main_string[100];
    char sub_string[100];
    int index;

    input_string(main_string, sub_string);
    index= sub_str_index(main_string,sub_string);
    output(main_string,sub_string,index);

    return 0;
}

void input_string(char* a, char* b)
{
    printf("enter main string:");
    scanf("%s",a);
    printf("enter substring:");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int i,j,k;
    int string_length=strlen(string);
    int sub_length=strlen(substring);

    for(i=0;i<=string_length-sub_length;i++)
    {
        for(j=1,k=0;k<sub_length && string[j]==substring[k];j++,k++);
        if(k==sub_length)
        return i;
    }
    return -1;
}

void output(char *string, char *substring,int index)
{
    if(index != -1)
    printf("'%s' is found in '%s' at index %d\n",substring,string,index);
else
printf("'%s' is not found in '%s'\n", substring,string);
}