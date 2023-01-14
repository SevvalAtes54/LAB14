//
//  main.c
//  LAB14 Q2
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void func_Sirala(char dizi[]);
int main(int argc, const char * argv[]) {
    char str[5];
    gets(str);
    func_Sirala(str);
    
    
    
    return 0;
}

void func_Sirala(char dizi[]){
    char siralama[5];
    int a =0;
    for(int i=0;i<5;i++){
        for(int j =i+1;j<5;j++){
            if( dizi[j] < dizi[i] ){
                int temp;
                temp = dizi[j];
                dizi[j]= dizi[i];
                dizi[i]= temp;
                
            }
            else{
               
                // ornegin 5 elemanlıo olursa ilk birinciyi bakcak
            }
        }
    }
    
    
    for(int k =0;k<5;k++){
        
        printf("%c",dizi[k]);
    }
    
}
