//
//  main.c
//  LAB14 Q1
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
void degerBul(int dizi[]);
int main(int argc, const char * argv[]) {
    int sayilar[10] ;
    for(int i=0;i<10;i++){
        
        printf("bir sayi giriniz");
        scanf("%d",&sayilar[i]);
    }
    degerBul(sayilar);
    
    return 0;
}
void degerBul(int dizi[]){
    int enbuyuk = dizi[0];
    int enbuyukikinci = dizi[0];
    for(int i =1;i<10;i++){
        if(dizi[i]>enbuyuk){
            enbuyukikinci =enbuyuk;
            enbuyuk= dizi[i];
            
        }
        
    }
    printf("%d %d",enbuyuk,enbuyukikinci);
  
    
    
}
