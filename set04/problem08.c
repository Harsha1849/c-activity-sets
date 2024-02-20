#include<stdio.h>
typedef struct{
    int num,den;
}Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[]);
void output(int n, Fraction f[], Fraction sum);

int main()
{
    int n;
    Fraction sum;
    n=input_n();
    Fraction fractions[n];
    input_n_fractions(n,fractions);
    sum=add_n_fractions(n,fractions);
    output(n,fractions,sum);
    return 0;
}

int input_n()
{
    int n;
    printf("enter no of fractions:");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction() {
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d", &f.num);
    printf("Enter denominator: ");
    scanf("%d", &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[]) {
    printf("Enter %d fractions:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Fraction %d:\n", i + 1);
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[]) {
    Fraction sum = {0, 1}; 
    
    for (int i = 0; i < n; i++) {
        sum = add_fractions(sum, f[i]);
    }
    
    return sum;
}

void output(int n, Fraction f[], Fraction sum) {
    printf("Sum of %d fractions:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d/%d ", f[i].num, f[i].den);
        if (i < n - 1)
            printf("+ ");
    }
    printf("= %d/%d\n", sum.num, sum.den);
}