//
//  main.c
//  LAB14 Q4 Extra
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
void Eleman_Ekle( char dizi[],int x);
int main(int argc, const char * argv[]) {
    //  diziye eleman ekleme
    char dizi[7] = { 1,3,5,7,9};
   
    int sayi;
    printf("eklenmesini istediğiniz elemanı giriniz");
    scanf("%d",&sayi);
    Eleman_Ekle(dizi,sayi);
    puts(dizi);
    return 0;
}
void Eleman_Ekle( char dizi[],int x){
    int k=0;
    int a;
    while ( dizi[k]!='\0') {
        k++;
    }
    k= k+1;
    for(int i =0;i<k+1;i++){
         a =0;
        if(x<dizi[i]){
            for(int j=k;j>=i;j--){
             
                dizi[k+1] = dizi[k];
                a++;
                
            }
            
            
        }
        if(a!=0){
            
            dizi[i]=x;
            
        }
        
    }
    
    
    
    
    
    
    
    for(int i=0;i<k+1;i++){
        
        printf("%c",dizi[i]);
        
    }
    
}
