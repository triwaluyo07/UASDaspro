#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program Pangkat\n");
    printf("----------------\n");

    int bil, pangkat, hasil;
    int x;

    printf("Inputkan Bilangan : ");
    scanf("%d",&bil);

    printf("Inputkan pangkat  : ");
    scanf("%d",&pangkat);

    hasil = pow(bil,pangkat);

    puts("\n");

    printf("%d pangkat %d = ",bil,pangkat);

    printf("%d ",bil);
    for(x=1;x<pangkat;x++)
    {

        printf("x %d ",bil);

    }

    printf("= %d ",hasil);
    return 0;
}
