#include<stdio.h>
void input_strings(char *string1,char *string2)
{
    printf("enter first string");
    scanf("%s",string1);
    printf("enter second string");
    scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{
    int i=0;
    while(string1[i] !='\0' && string2[i] !='\0')
    {
        if (string1[i] != string2[i])
        {
            return string1[i] - string2[i];
        }
        i++;
    }
}
void output(char *string1, char *string2, int result)
{
    if (result ==0)
    {
        printf("%s is equal to %s\n",string1,string2);
    }
    else if(result<0)
    {
        printf("%s is lesser than %s\n",string1,string2);
    }
    else
    {
        printf("%s is greater than %s\n",string1, string2);
    }
}
int main()
{
    char string1[100],string2[100];
    input_strings(string1, string2);
    int result = stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}