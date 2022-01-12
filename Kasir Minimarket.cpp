/* Nama    : Natashya Welhelmina
   NIM     : 2130511093
   Prodi   : Teknik Informatika
   Program : Kasir Minimarket Self Service
   UAS DASAR PEMROGRAMAN
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(){
	char nama[50], barang[20], back;
	int jumlah, item, total, bayar, kembalian,
		harga[10]={25000, 11500, 10000, 15000, 6500, 38500, 67000, 12000, 8500, 23000}, i=0;


	do{
		system("CLS");
		
		cout<<"======================== APHRODITE MART ========================"<<endl;
		cout<<"=================== SELF SERVICE MINIMARKET ===================="<<endl;
		cout<<"Masukkan Nama Anda : " ; cin>>nama; 
		cout<<"Pilihan barang yang tersedia---"<<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		cout<<"|	[1]  Rokok                = Rp 25.000                            |"   <<endl;
		cout<<"|	[2]  Chitato Chips        = RP 11.500                            |"   <<endl;
		cout<<"|	[3]  Ice Cream            = RP 10.000                            |"   <<endl;
		cout<<"|	[4]  Coklat Silverqueen   = Rp 15.000                            |"   <<endl;
		cout<<"|	[5]  Cimory Regal         = Rp 6.500                             |"   <<endl;
		cout<<"|	[6]  Minyak Sania         = Rp 38.500                            |"   <<endl;
		cout<<"|	[7]  Beras Premium        = RP 67.000                            |"   <<endl;
		cout<<"|	[8]  Pasta Gigi Pepsodent = RP 12.000                            |"   <<endl;
		cout<<"|	[9]  Sosis Kanzler        = Rp 8.500                             |"   <<endl;
		cout<<"|	[10] Biore Body Wash      = Rp 23.000                            |"   <<endl;
		cout<<"--------------------------------------------------------------------------"<<endl;
		
		cout<<"			(Masukkan barang berdasarkan Nomor)"<<endl;
		cout<<" Silahkan Pilih barang anda : "; cin >> item;
		
		//Percabangan
		switch(item){
			case 1:
				strcpy(barang,"Rokok");
				break;
			case 2:
				strcpy(barang,"Chitato Chips");
				i=1;
				break;
			case 3:
				strcpy(barang,"Ice Cream");
				i=2;
				break;
			case 4:
				strcpy(barang,"Coklat Silverqueen");
				i=3;
				break;
			case 5:
				strcpy(barang,"Cimory Regal");
				i=4;
			case 6:
				strcpy(barang,"Minyak Sania");
				i=5;
				break;
			case 7:
				strcpy(barang,"Beras Premium");
				i=6;
				break;
			case 8:
				strcpy(barang,"Pasta Gigi Pepsodent");
				i=7;
				break;
			case 9:
				strcpy(barang,"Sosis Kanzler");
				i=8;
				break;
			case 10:
				strcpy(barang,"Biore Body Wash");
				i=9;
				break;
			default:
				cout << "Pilihan barang yang anda pilih tidak tersedia..." << endl;
				goto ulang;
		}
		
		cout<<"	Anda memilih " << barang <<endl;
		cout<<"Jumlah barang yang dibeli : ";cin>> jumlah;
		total = jumlah * harga[i];
		cout << "-------------------------------------------------------" << endl;
		cout << "|  	             APRHODITE MART                    |" << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "\tNama Pemesan         : "	<< nama     <<endl;
		cout << "\tNama Barang          : "	<< barang     <<endl;
		cout << "\tJumlah Barang        : "	<< jumlah   <<" buah " <<endl;
		cout << "\tHarga Barang         : "	<< harga[i] << " * "   << jumlah << endl;
		cout << "\tTotal Pembayaran     : Rp " << total    <<endl;
		
		
		cout << "--------------------------------------------" << endl;
		cout << "Silahkan bayar disini 		 : Rp."; 		cin>>bayar;
		cout << endl;
				
		
		kembalian=bayar-total;
		cout << "Uang yang anda bayar \t\t\t Rp. " << bayar<<endl;
		cout << "Uang kembalian \t\t\t\t Rp. "     << kembalian <<endl;
		cout << "##################################################"<<endl;
		
		ulang:
			cout << "			[Y = ya / T = tidak]"<<endl;
			cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "; cin>>back;
		}while (back=='Y'||back=='y');
		cout << endl;
		cout << "		TERIMAKASIH TELAH BELANJA DI APHRODITE MART    "<<endl;	
	
		
		return 0;
	}
