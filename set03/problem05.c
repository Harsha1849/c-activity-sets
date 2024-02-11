#include<stdio.h>
int input_array_size();
void init_array(int n, int a[]);
void eratosthenes_sieve(int n,int a[]);
void output(int n, int a[]);

int main()
{
    int n;
    n=input_array_size();
    int a[n+1];
    init_array(n,a);
    eratosthenes_sieve(n,a);
    output(n,a);
    return 0;
}
int input_array_size()
{
    int n;
    printf("enter upper limit to find prime nos bw 2 and n:");
    scanf("%d",&n);
    return n;
}
void init_array(int n,int a[])
{
    for(int i=0;i<=n;i++)
    {
        if (a[i]==1)
        {
            for (int j=i*i;j<=n;j+=i)
            {
                a[j]=0;
            }
        }
    }
}
void output(int n, int a[])
{
    printf("prime nos bw 2 and %d are:\n",n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
        }
    }
    printf("\n");
}
