#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main ()
{


	// Data Admin 
	char username[50], password[50];

	//DATA PELANGGAN
	int biaya, tanggal, total_bayar, uang_kembalian, berat, total_berat;
	char pilihan, nama[30], alamat[20], no_hp[13], kategori_cucian[30];

	//TANGGAL
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);


  
	printf("|   =================== SELAMAT DATANG ==================  |\n");
	printf("|               PROGRAM KASIR GANDI LAUNDRY                |\n");
	printf("============================================================\n");

	printf("============================================================\n");
	printf("|  ==================== LOGIN ADMIN ====================   |\n");
	kembali:
	printf("Username : ");
	scanf("%s", username);
	printf("Password : ");
	scanf("%s", password);
	printf("\n=============================================================\n");

	if(strcmp(username, "gandi_laundry")==0 && strcmp(password,"12345")==0)
	{
		printf("\nID operator 		: 1\n");
		printf("Nama Operator 		: Operator 1\n");
		printf("\nAkses diterima. Selamat Datang Di Program Kasir Gandi Laundry\n");
    }


    else
	{
    	printf("\nUsername dan Password tidak sesuai\n");
    	printf("Tekan Y untuk kembali atau tekan T untuk keluar : ");
		scanf("%s", &pilihan);


		if (pilihan== 'Y' || pilihan== 'y')
		{
			goto kembali;
		}
		else if (pilihan== 'T' || pilihan== 't')
    
		{
			goto keluar;
		}
	}

	printf("\n\nTekan Y untuk kembali atau tekan T untuk keluar : ");
	scanf("%s", &pilihan);

		if (pilihan== 'Y' || pilihan== 'y')
		{
			goto kembali;
		}
		else if (pilihan== 'T' || pilihan== 't')
		{
			goto keluar;
		}

	keluar : 

  
	printf("\nTerimakasih Telah Mempercayai Gandi Laundry!\n"); 
		return 0;

}
