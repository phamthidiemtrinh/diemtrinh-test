//4. Viết chương trình tìm đoạn chung dài nhất của 2 chuỗi kí tự ví dụ "abcdefggh" và "abcgghdefg" >>>>> "defg"
#include <stdio.h>
#include <string.h>
void main()
{    int i,j,m,t,n,vt,k;
char u[100],v[100];
    gets(u);
    gets(v);
    m=strlen(u);
    n=strlen(v);
    vt=0;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)

            if (u[i]==v[j])
        {
            t=1;
            while (u[i+t]==v[j+t])
                t++;
            if (t>vt)
            {vt=t; k=i;}


        }
    }
   for (i=k;i<k+vt;i++) printf("%c",u[i]);
}
