//code 1 taking input for complex number using struct
#include <stdio.h>
#include <string.h>

struct complex 
{
    int real;
    int imaginary;
};
void input(struct complex *X)
{
    printf("Enter real part--> ");
    scanf("%d",&X->real);
    printf("Enter imaginary part--> ");
    scanf("%d",&X->imaginary);
}
void display(struct complex *X)
{
    printf("%d+i%d\n",X->real,X->imaginary);
}
void complexaddition(struct complex *X1 , struct complex *X2)
{
    struct complex Res;
    Res.real = X1->real + X2->real;
    Res.imaginary = X1->imaginary + X2->imaginary;
    printf("%d+i%d\n",Res.real,Res.imaginary);
}
void complexmulti(struct complex *X1 , struct complex *X2)
{
    struct complex mul;
    mul.real = (X1->real*X1->real)-(X2->imaginary*X1->imaginary);
    mul.imaginary= (X1->real*X2->imaginary)+(X1->imaginary*X2->real);
    printf("%d+i%d\n",mul.real,mul.imaginary);
}
int main()
{
    struct complex N1;
    struct complex N2;
    input(&N1);
    display(&N1);
    input(&N2);
    display(&N2);
    complexaddition(&N1,&N2);
    complexmulti(&N1,&N2);
    
    
    
    return 0;
}
//code 2
