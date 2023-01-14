//
//  main.c
//  LAB14 Q4
//
//  Created by my computer on 11.01.2023.
//

#include <stdio.h>
void sirala(int dizi[]);

void ekle(int dizi[]);

int main(int argc, const char * argv[]) {
    //  Küçükten büyüğe doğru sıralı bir diziye, dizinin sırasını bozmayacak şekilde, verilen bir elemanı ekleyen fonksiyonu yazınız.
    
    int dizi[10];
    for(int i =0;i<5;i++){
        
        scanf("%d",&dizi[i]);
        
    }
     sirala(dizi);
    for(int i =0;i<5;i++){
        
        printf("%d ",dizi[i]);
        
    }
     ekle(dizi);
    for(int i =0;i<6;i++){
        
        printf("%d ",dizi[i]);
        
    }
    return 0;
}
void sirala(int dizi[]){
    for(int i =0;i<5;i++){
        for (int j =i+1;j<5;j++){
            if(dizi[j]<dizi[i]){
                
                int temp;
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
                
            }
        }
    }
}
void ekle(int dizi[]){
    int sayi;
    printf("eklemek istediginiz sayiyi giriniz");
    scanf("%d",&sayi);
    dizi[5] = sayi;
    for(int i =0;i<5;i++){
        
           
            for(int j =i+1;j<6;j++){
                if(dizi[j]<dizi[i]){
                    
                    int temp;
                    temp = dizi[i];
                    dizi[i] = dizi[j];
                    dizi[j] = temp;
                    
                }
            
        }
    }
    
    
}
