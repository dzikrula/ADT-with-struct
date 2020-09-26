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
 
  printf("NPM: ");
  scanf("%i",&Mahasiswa01.NPM);
  
  printf("StatusMahasiswa: ");
  gets(Mahasiswa01.StatusMahasiswa);
 
  printf("Hasil: \n");
 
  printf("%s kuliah di %s ", Mahasiswa01.nama, Mahasiswa01.kuliah);
  printf("dengan NPM %i\n", Mahasiswa01.NPM);
 
  bool a,b;
  a = true;
  b = false;
  if(a){
  	printf("code:\n");
	  }
  if(b){
  	printf("Not Found\n");
  }
 
  return 0;
}	
