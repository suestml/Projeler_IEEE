#include <stdio.h>
int main()
{
    float vki;
    int kg;
    float boy;
    int a;
    printf("kilonuzu giriniz:");
    scanf("%d",&kg);
    printf("boyunuzu giriniz:");
    scanf("%f",&boy);
    vki= kg/(boy*boy);
    printf("\nZayıf kilo aralığı: 0 – 60 kg \n" );
    printf("Normal kilo aralığı: 60 – 81 kg \n") ;   
    printf("Fazla kilo aralığı: 81 – 97 kg\n") ; 
    printf("Obez kilo aralığı: 97 - ? kg\n\n");
    if(vki<=18.4){
      a= 1;
      switch(a);
    }
    else if(vki>18.4 & vki <= 24.9){
       a= 2;
       switch(a);
    }
    else if(vki>24.9 & vki <= 29.9){
        a= 3;
        switch(a);
    }
    else{
        a= 4;
        switch(a);
    }
	switch(a){
        case 1:
            printf("Vücut kütle indeksi: %f Zayıf",vki);break;
        case 2:
            printf("Vücut kütle indeksi: %f Normal Kilolu",vki); break;
        case 3:
            printf("Vücut kütle indeksi: %f Fazla Kilolu", vki); break;
        case 4:
            printf("Vücut kütle indeksi: %f Obez",vki);break;
        default:
        printf("Değerleri tekrar giriniz");
    }
    printf("\n\nAralıklar\n");
    printf("0 - 18,4 : Zayıf\n");
    printf("18,5 - 24,9 : Normal Kilolu\n");
    printf("25 - 29,9 : Fazla Kilolu\n");
    printf("30 - ? : Obez");
}
