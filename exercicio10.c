#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,mdc, i;



    while(scanf("%d %d %d", &n1, &n2, &n3) == 3 ){
        mdc=1;

        for (i=2;i<=n1 || i<=n2 || i<=n3;i++ ){
            if(n1%i==0 && n2%i==0 && n3%i==0){
                mdc=i;
            }
        }
        printf("%d\n", mdc);
   }


return 0;
}

