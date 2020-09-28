link https://github.com/dzikrula/ADT-with-struct.git (hapus jika mau compile dan run program)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Elektronik {
   char Jenis[50];
   char merek[50];
   unsigned int tipe[50];
   unsigned int	 RAM[50];
   };
 
int main(void)
{
  struct Elektronik Elektronik01; 
 
  printf("***** PENJUALAN ELEKTRONIK *****\n");
  printf("\n");
  
  printf("jenis elektronik: ");
  gets(Elektronik01.Jenis);
  
  printf("merek: ");
  gets(Elektronik01.merek);
 
  printf("tipe (isikan angka saja): ");
  gets(Elektronik01.tipe);
 
  printf("RAM (isikan angka saja): ");
  gets(Elektronik01.RAM);
  
  printf("Hasil: \n");
 
  printf("pencarian elektronik jenis %i dengan merek %s ", Elektronik01.Jenis, Elektronik01.merek);
  printf("yang bertipe %s dengan RAM %s ", Elektronik01.tipe, Elektronik01.RAM);
 
 
 
  return 0;
}	
