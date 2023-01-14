//
//  main.c
//  LAB14 Q3
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    //  Kullanıcının gönderdiği kelime içerisinde kaç tane sesli harf olduğunu bulan fonksiyonu yazınız.
    char string[30];
    gets(string);
    int a =0;
    for(int i =0;i<30;i++){
        if(string[i]==65 || string[i]==69 ||string[i]==73 ||string[i]==79 ||string[i]==85 ||string[i]==65+32 || string[i]==69+32 ||string[i]==73+32 ||string[i]==79+32 ||string[i]==85 +32){
            // sadece karakterleri yazarak da bulabilriz;
            
            a++;
            
            
            
            
        }
        
        
    }
    printf("%d tane sesli harf vardir",a);
    
    return 0;
}
