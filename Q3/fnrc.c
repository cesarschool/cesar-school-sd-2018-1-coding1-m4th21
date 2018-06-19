#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar (char sentence[], int length) {

 printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

 int i1 = 0; 
 int i2 = 0; 
 
 
 int letra_atual_e_repetida = 1; 

 while(i1 < length)  {

     letra_atual_e_repetida = 0;
     i2 = 0;
   
     while(i2 < length) {
         
         if(i1 != i2) {
             if (sentence[i1]==sentence[i2]) {
                 letra_atual_e_repetida = 1; 
             }
         }
         i2 = i2 + 1; 
     } 
   
     if (letra_atual_e_repetida == 0) {

         printf("%c é a primeira letra não repetida", sentence[i1]);
         return(sentence[i1]); 
     }
     
     i1 = i1 + 1;  
 } 
 printf("nenhuma letra não é repetida");
 return -1;
}

int main()
{
 printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

 firstNonRepeatingChar("ovo", 3);
 firstNonRepeatingChar("cesar school", 12);
 firstNonRepeatingChar("sistemas digitais", 17);
 return 0;
}
