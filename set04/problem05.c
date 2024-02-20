#include<stdio.h>
int input_size();
void input_array(int n, int a[]);
int find_largest_index(int n, int a[]);
void output(int index);

int main()
{
    int n, index;
    n=input_size();
    int array[n];
    input_array(n,array);
    index=find_largest_index(n,array);
    output(index);
    return 0;
}

int input_size()
{
    int size;
    printf("enter array size:");
    scanf("%d",&size);
    return size;
}

void input_array(int n, int a[])
{
    printf("enter elements of array:\n");
    for(int i=0;i<n;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[])
{
    int max_index=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[max_index])
        {
            max_index=i;
        }
    }
    return max_index;
}

void output(int index)
{
    printf("index of largest number in array:%d\n",index);
}