//7 Nhập vào 1 số kiểm tra nó có phải số lẻ hay không
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanhoa(char ten[50]);
void main()
{
    char ten[50];
    gets(ten);
    printf("ten ban dau: \n");
    puts(ten);
    printf("\nten da chuan hoa\n");
    chuanhoa(ten);
}
void chuanhoa( char ten[50])
{
    int i=0,j=0,n;
    n=strlen(ten);
    while(i<(n-1))
          {
        if (ten[i]==' '&&ten[i+1]==' ')
            strcpy(&ten[i],&ten[i+1]);
        else
            i++;
    }
    ten=strlwr(ten);
    ten[0]=ten[0]-32;
    for (i=0;i<strlen(ten)-1;i++)
    {
        if (ten[i]==' ') ten[i+1]=ten[i+1]-32;
    }
   puts(ten);

}
