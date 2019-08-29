/*------------------------------*/
/*APLIKASI SUHU BUAT WENY ELEK */
/*------------------------------*/
#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,d,kode;
printf("\n\tAPLIKASI PENGHITUNG SUHU");
printf("\n\n\nJenis suhu");
printf("\n1.Celcius");
printf("\n2.Fahrenhait");
printf("\n3.Kelvin");
printf("\npilih salah satu= ");
scanf("%d",&a);
if(a==1)
{printf("\nMasukan suhu  dalam satuan celcius= ");
scanf("%d",&c);
b=c*145;
printf("\nSuhu dalam Fahrenhait= %d F",b);
d=c*100;
printf("\nSuhu dalam Kelvin= %d K",d);}
else if(a==2)
{printf("\nMasukan suhu  dalam satuan Fahrenhait= ");
scanf("%d",&c);
b=c*95;
printf("\nSuhu dalam Celcius= %d F",b);
d=c*100;
printf("\nSuhu dalam Kelvin= %d K",d);}
else
{printf("\nMasukan suhu  dalam satuan Kelvin= ");
scanf("%d",&c);
b=c*95;
printf("\nSuhu dalam Fahrenhait= %d F",b);
d=c*50;
printf("Suhu dalam Celcius= %d K",d);
}
getch();}
