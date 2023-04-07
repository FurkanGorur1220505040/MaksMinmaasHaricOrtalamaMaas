#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 6

//Max Min ve ortalama degeri bulmak için fonksiyon tanimlandi
int Maxmin(int maaslar[N],int max,int min,int toplam){
int i;
max=maaslar[0];
for(i=1;i<N;i++){     // dizi icindeki max ve min degeri bulmak icin dongu olusturuldu
if(max < maaslar[i])
max=maaslar[i];
	
}	
printf("\nMaksimum maas:%d\n",max);
min=maaslar[0];

for(i=1;i<N;i++){
if(min > maaslar[i])
min=maaslar[i];	

}
printf("Minumum maas:%d\n",min);

//toplam degerden max ve min degerler cikarildi kalan sayi , kalan verilere bolundu
toplam -= max;
toplam -= min;
toplam /= N-2;
return toplam;
}



int main() {
int maas[N]={5600,4800,12500,4500,6500,3750};  //maaslar tanimlandi
int i, max=0,min=0,ort=0,toplam=0;

printf("Girilen maaslar:");
for(i=0;i<N;i++){  //maaslarý toplamak icin dongu olusturuldu
toplam += maas[i];	
printf(",%d",maas[i]);

}
//fonksiyon cagirildi
ort=Maxmin(maas,max,min,toplam);

//ortalama maas ekrana bastirildi
printf("\nAsgari ve Azami Maas Haric Ortalama Maas:%d",ort);	

	return 0;
}
