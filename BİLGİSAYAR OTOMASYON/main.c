#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char pc_marka[30];
    int pc_ram;
    int pc_hafiza;
} bilgisayar_bilgi;

 typedef struct
{
 int *pc_stoksayisi;
}bilgisayar_stok;

 bilgisayar_bilgi* fiyat;
bilgisayar_stok *pc;
 pc_stoksayisi;


void pc_ekle(int pc_sayisi)
{
    int pc_stoksayisi,i;
    if(pc_stoksayisi==0)
    {

        pc=(pc_stoksayisi);malloc(sizeof(pc_stoksayisi));
    }

    else
    {
        pc=(pc*)realloc(pc,sizeof(pc_stoksayisi)*(pc_stoksayisi+1));

    }
  srtcopy((pc+pc_stoksayisi)->pc_hafiza,pc_hafiza);
  srtcopy((pc+pc_sayisi)->pc_marka,pc_marka);
   srtcopy((pc+pc_sayisi)->pc_ram,pc_ram);

     for(i=0;i<=pc_sayisi;i++){
 printf("bilgisayarin markasi nedir?");
scanf("%s",&(bilgisayar_bilgi)->pc_marka);
printf("bilgisayarin RAM Ý ne kadar?");
scanf("%s",&(pc+pc_sayisi)->pc_islemci);
printf("bilgisayarin hafizasi ne kadar?");
scanf("%s",&(pc+pc_sayisi)->pc_hafiza);


  }
  pc_sayisi++;
}


void pcBilgilerilistele(){
	int i;
	for(i=0;i<pc_sayisi;i++){
		if(pc_sayisi!==0){
    printf("-------------------------------------------------------------------------\n");
    printf("bilgisayarin markasi:%s ",(pc+i)->pc_markasi);
    printf("bilgisayarin RAM i:%s ",(pc+i)->pc_ram);
    printf("bilgisayarin hafizasi:%s ",(pc+i)->pc_hafiza);

  }
 }
}


void bilgisayarkaydisilme(struct pc_stoksayisi)
{
    if(pcsayisi<=0) //aradigimiz deger sifirdan kucuk ve toplam futbolcu sayisindan buyukse futbolcu bulunamadi hatasi verir.
    {
        printf("bilgisayar stokta kalmamistir!!\n\n");
    }
    else
    {

        for(int i=pcsayisi; i<=pcsayisi; i++)
        {
            (pc+(i-1))=(pc+i); //buradaki islemde silmek istedigimiz futbolcu icin *(futbolcu+(i-1))=*(futbolcu+i) islemi kullanilir.
                                      // i den -1 cikarilmasinin sebebi silinen futbolcu yerine diger futbolcularin kayma islemini gerceklestirebilmektir.
        }
        pc_sayisi--;
        pc=(adet*)realloc(pc,sizeof(adet)*(pc_sayisi));

    }
    free(pc);
}

void bilgisayarbilgisiguncelleme(struct bilgisayar_bilgi)
{
    if(bilgisayar_bilgisi<=0)
    {
        printf("bilgisayar bilgisi bulunamadi!!\n\n");
    }
    printf("guncellemek istediginiz bilgisayarin ozellikleri\n\n");
    else
    {
       for(i=0;<=pc+(pc_sayisi-1)->pc_sayisi;i++)
       {
       printf("bilgisayarin modeli:%s\n",(((pc+(pc_sayisi-1)->pc))->pc_marka));
       printf("bilgisayarin RAM i:%d\n",(((pc+(pc_sayisi-1)->pc))->pc_ram));
       printf("bilgisayarin hafizasi:%d\n",(((pc+(pc_sayisi-1)->pc))->pc_hafiza));
       }
       printf("bilgisayarin guncel markasi\n");
       scanf("%s",&(((pc+(pc_sayisi-1)->pc))->pc_marka));
       printf("bilgisayarin guncel RAM i\n");
       scanf("%d",&(((pc+(pc_sayisi-1)->pc))->pc_ram));
       printf("bilgisayarin guncel hafizasi\n");
       scanf("%d",&(((pc+(pc_sayisi-1)->pc))->pc_hafiza));
}

void bilgisayarfiyatihesapla(struct pc_stoksayisi){
double indirimorani;
int musteri,liseogrencisi,ortaokulogrencisi,universiteogrencisi,bilgisayarfiyati;
double toplamTutar=0.0;
printf("Lutfen bilgisayar fiyatini giriniz:");
scanf("%d",&bilgisayarfiyati);

for(Bilgisayar_bilgi*fiyati=pc;bilgisayarbilgi*fiyati!<=0;bilgisayarbilgi*fiyati++)
{
    if(musteri==ortaokulogrencisi)
    {
       indirimorani=0.1;
    }
    else if(musteri==liseogrencisi)

    {
        indirimorani=0.2;
    }
    else if(musteri==universiteogrencisi)
    {
        indirimorani=0.3;
    }
    else{
        indirimorani=0;
    }
    Tutar=bilgisayarfiyati*indirimorani;
  printf("Odemeniz gereken tutar:%.2lf",Tutar);
}
}
void fatura bilgisi(struct bilgisayar_bilgi *fiyat)
{
    int kdv_orani,adet;
 printf("bilgisayarin kdv oranini giriniz");
 scanf("%d",&kdv_orani);
 int i;
 for(i=1;i<=adet;i++)
 {
     if(bilgisayar_bilgi *fiyat<=7000)
     {
         kdv_orani=200;
     }
     else if(bilgisayar_bilgi *fiyat<=9000)
     {
         kdv_orani=300;
     }
     else
     {
         kdv_orani=400;
     }
     faturabilgisi=tutar+kdv_orani;
     printf("odemeniz gereken fatura bilgisi:%lf",faturabilgisi);
 }
}

int main()
{    struct bilgisayar_bilgi;
     struct bilgisayar_stok;
     struct bilgisayar_bilgi* fiyat;
    pc_ekle();
    pcBilgilerilistele();
     bilgisayarbilgisiguncelleme();
     bilgisayarkaydisilme();
     bilgisayarfiyatihesapla();
     fatura bilgisi();

       for(i=0;i<=pc_sayisi;i++){
    printf("bilgisayarin markasi nedir?");
    scanf("%s",&(pc+pc_sayisi)->pc_marka);
    printf("bilgisayarin RAM i ne kadar?");
   scanf("%s",&(pc+pc_sayisi)->pc_islemci);
     printf("bilgisayarin hafizasi ne kadar?");
        scanf("%s",&(pc+pc_sayisi)->pc_hafiza);


         printf("bilgisayarin markasi:%s ",(pc+i)->pc_markasi);
    printf("bilgisayarin RAM i:%s ",(pc+i)->pc_ram);
    printf("bilgisayarin hafizasi:%s ",(pc+i)->pc_hafiza);


  }


    int islem;

   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf(">>>>>BILGISAYAR KAYIDI EKLE(1)\n");
   printf(">>>>>BILGISAYARLARI LISTELE(2)\n");
   printf(">>>>>BILGISAYARLARI GUNCELLE(3)\n");
   printf(">>>>>BILGISAYAR KAYIDI SIL(4)\n");
   printf(">>>>>YAPILAN KAMPANYALAR(5)\n");
   printf(">>>>>tutar BILGISI(6)\n");
   printf("Yapmak istediginiz islemi seciniz");
   scanf("%d",&islem);

   switch(islem)
   {
   case '1':
    {
        pc_ekle();
        break;
    }
   case '2':
    {
        pcBilgilerilistele();
        break;
    }
    case '3':
    {     bilgisayarbilgisiguncelleme();
        break;
    }

   case'4':
    {
         bilgisayarkaydisilme();
         break;
    }
   case'5':
       {
            bilgisayarfiyatihesapla();
            break;
       }
   case'6':
    {
       fatura bilgisi();
       break;
    }
   default:
    {
        printf("Hatali tuslama yapiniz!!!");
    }
   }
    return 0;
}
