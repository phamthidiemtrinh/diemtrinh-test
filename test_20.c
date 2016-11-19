//20 Viết chương trình đếm có bao nhiêu số nguyên tố từ 1 đến n
#include <stdio.h>
void main()
{
    int n,k,i,j,dem,t;
    scanf("%d",&n);
    dem=0;
    if (n==2) dem=1;
    if (n>=3) dem=2;
    for (i=5;i<=n;i+=2)
    { t=0;

            for (j=2;j<=(int)(sqrt(i));j++)
                if (i%j==0) t=1;
            if (t==0) dem++;


    }
    printf("\n co %d so nguyen to tu  1 den  %d\n",dem,n);

}
