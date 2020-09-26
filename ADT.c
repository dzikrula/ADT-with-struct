#include <stdio.h>
#include <stdbool.h>
 
struct Mahasiswa {
   char  nama[50];
   char  kuliah[50];
   unsigned int  NPM;
   char  StatusMahasiswa[50];
  };
 
int main(void)
{
  struct Mahasiswa Mahasiswa01; 
 
  printf("***** Pendaftaran Mahasiswa Baru *****\n");
  printf("\n");
  
  printf("Nama: ");
  gets(Mahasiswa01.nama);
 
  printf("Kuliah: ");
  gets(Mahasiswa01.kuliah);
 
  printf("StatusMahasiswa: ");
  gets(Mahasiswa01.StatusMahasiswa);
 
  printf("NPM: ");
  scanf("%i",&Mahasiswa01.NPM);
  
  printf("Hasil: \n");
 
  printf("%s kuliah di %s ", Mahasiswa01.nama, Mahasiswa01.kuliah);
  printf("dengan NPM %i yang berstatus %s\n", Mahasiswa01.NPM, Mahasiswa01.StatusMahasiswa);
 
 
 
  return 0;
}	
