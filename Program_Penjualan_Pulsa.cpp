// Program Penjualan Pulsa di ZAIN CELL
#include "iostream.h"
#include "conio.h"
#include "iomanip.h"
#include "windows.h"
void loading(); // prototipe fungsi
void sukses();
struct pulsa
{
   char nama[50];
};
main()
{
	pulsa pls;
	int jm,total=0,pul,i,nom[10],bayar[10],tb;
	char hp[15],pln[15],kembali;

	system("color 3E");
   gotoxy(10,1);cout<<"�������������������������������������������������������ͻ";
   gotoxy(10,2);cout<<"� �����  �����  �  ���   �   �����  �����  �      �     �";
	gotoxy(10,3);cout<<"�    ��  �   �  �  ���   �   �      �      �      �     �";
	gotoxy(10,4);cout<<"�       �����  �  �    �   �      �����  �      �     �";
	gotoxy(10,5);cout<<"� ��     �   �  �  �   ���   �      �      �      �     �";
	gotoxy(10,6);cout<<"� �����  �   �  �  �   ���   �����  �����  �����  ����� �";
   gotoxy(10,7);cout<<"�������������������������������������������������������ͼ";
	cout<<endl<<endl;

   cout<<"Selamat datang di toko pulsa kami"<<endl;
   cout<<"Silahkan di Isi !\n\n";
   cout<<"Nama Pembeli     : ";cin.getline(pls.nama,20);
   cout<<"\nJumlah Pembelian : ";cin>>jm;
   zaenal:
   loading();
	clrscr();
   // Menu Pulsa
   system("color 3E");
   cout<<"MENU PULSA ZAIN CELL"<<endl<<endl;
   cout<<" 1.Pulsa Elektrik\n\n 2.Pulsa Listrik\n\n 3.Keluar\n\n";
   cout<<"pilih pulsa yang akan anda beli <1/2/3> = ";cin>> pul;
   loading();
   clrscr();
   //seleksi dengan switch
   switch (pul){
      // Pulsa Elektrik
   	case 1: system("color 3E");
      		  cout<<"\nAnda ingin membeli Pulsa Elektrik"<<endl;
      		  cout<<"Ikuti Langkah di bawah ini"<<endl<<endl;

   		for(i=1;i<=jm;i++){
				cout<<"Pengisian ke - "<<i<<endl<<endl;
      		cout <<"Masukan Nomor HP           : ";cin>>hp;

      		cout << endl;
      		cout<<"��������������������������������ķ"<<endl;
      		cout<<"�   NOMINAL   � KODE �   HARGA   �"<<endl;
      		cout<<"��������������������������������Ķ"<<endl;
      		cout<<"� Rp 5000     �  5   � Rp 7000   �"<<endl;
      		cout<<"� Rp 10000    �  10  � Rp 12000  �"<<endl;
      		cout<<"� Rp 25000    �  25  � Rp 27000  �"<<endl;
      		cout<<"� Rp 50000    �  50  � Rp 52000  �"<<endl;
      		cout<<"� Rp 100000   �  100 � Rp 102000 �"<<endl;
      		cout<<"��������������������������������Ľ"<<endl;
      		cout<<endl;
      		cout <<"Masukan kode pulsa HP      : ";cin>>nom[i];
				cout<<endl;

				if (nom[i]==5){bayar[i]=7000;}
				else if (nom[i]==10){bayar[i]=12000;}
				else if (nom[i]==25){bayar[i]=27000;}
				else if (nom[i]==50){bayar[i]=52000;}
				else if (nom[i]==100){bayar[i]=102000;}
            else {cout<<"Pilihan yang anda masukkan salah !"<<endl<<endl;
            		cout<<"Ketik T untuk kembali ke menu pulsa"<<endl<<endl;}
			}
         break;
      // Pulsa Listrik
      case 2:system("color 3E");
      	    cout<<"\nAnda ingin membeli Pulsa Listrik"<<endl;
             cout<<"Ikuti Langkah di bawah ini"<<endl<<endl;

         for(i=1;i<=jm;i++){
				cout<<"Pengisian ke - "<<i<<endl<<endl;
      		cout <<"Masukan Nomor PLN           : ";cin>>pln;

      		cout << endl;
      		cout<<"�������������������������������ķ"<<endl;
      		cout<<"�   NOMINAL  � KODE �   HARGA   �"<<endl;
      		cout<<"�������������������������������Ķ"<<endl;
      		cout<<"� Rp 20000   �  20  � Rp 22000  �"<<endl;
      		cout<<"� Rp 50000   �  50  � Rp 52000  �"<<endl;
      		cout<<"� Rp 100000  �  100 � Rp 102000 �"<<endl;
      		cout<<"� Rp 200000  �  200 � Rp 202000 �"<<endl;
      		cout<<"� Rp 500000  �  500 � Rp 502000 �"<<endl;
      		cout<<"�������������������������������Ľ"<<endl;
      		cout<<endl;
      		cout <<"Masukan kode pulsa PLN        : ";cin>>nom[i];
				cout<<endl;

            if (nom[i]==20){bayar[i]=22000;}
				else if (nom[i]==50){bayar[i]=52000;}
				else if (nom[i]==100){bayar[i]=102000;}
				else if (nom[i]==200){bayar[i]=202000;}
				else if (nom[i]==500){bayar[i]=502000;}
            else {cout<<"Pilihan yang anda masukkan salah"<<endl<<endl;
            		cout<<"Ketik T untuk kembali ke menu pulsa"<<endl<<endl;}
			}
   		break;
      // Keluar dari Program
      case 3:system("color 3E");
      		 exit(3);
      	break;
      default: cout<<"Pilihan yang anda masukkan salah !"<<endl<<endl;
      			cout<<"Ketik T untuk kembali ke menu pulsa"<<endl<<endl;
      	break;
   }
   // Persetujuan melanjtukan Transaksi
   system("color 3E");
   cout<<"\n\nApakah anda yakin ingin melanjutkan transaksi [Y|T]? :";  cin>>kembali;
   if(kembali=='t'||kembali=='T'){goto zaenal;}
   else{}

   loading();
   clrscr();
   // Tabel Transaksi dan Pembayaran
   system("color 3E");
	cout<<("------------- ZAIN CELL -------------")<<endl<<endl;
	cout<<"Nama : "<<pls.nama;
	cout<<endl<<endl;

   cout<<"���������������������������������͸\n";
	cout<<"� No � Kode �    Nomer    � Bayar �\n";
	cout<<"���������������������������������͵\n";

   for(i=1;i<=jm;i++){
		cout<<"�";	cout<<setiosflags(ios::left)<<setw(4)<<i;
      cout<<"�";  cout<<setw(6)<<nom[i];
		cout<<"�";	cout<<setw(13)<<hp;
		cout<<"�";	cout<<setw(7)<<bayar[i];
		cout<<setw(0)<<"� ";cout<<"\n";
	}
	cout<<"���������������������������������͵\n";

	for(int i=1;i<=jm;i++){
   	total=total+bayar[i];
   }
	cout<<"� Total                   �"<<setiosflags(ios::left)<<setw(7)<<total;
	cout<<"�"<<endl;
	cout<<"���������������������������������;\n";
	cout<<endl;

	cout<<"Masukan uang pembayaran : ";cin>>tb;
	cout<<endl;

	if(tb<total){
     system("COLOR 3E");
     cout<<"Maaf uang anda tidak cukup "<<endl;

	}
	else{
   	system("COLOR 3E");
      cout<<"Kembalian "<<(tb-total); cout << endl<<endl;

      cout<<"      *****Terima Kasih*****"<< endl;
   	cout<<"Semoga Anda puas dengan pelayanan kami";
      getch();
      loading();
      sukses();
   }

	getch();

}
// Fungsi Loading
void loading()
{
	int i,j,u;
   for(i=0;i<50;i<i++){
      u=i+50;
   	cout<<"loading"<<u<<" %";
      cout<<"\n";
      for(j=0;j<i;j++){
      	cout<<"�";
      }
      system("cls"); // menghapus layar
   }
}
// Fungsi Transaksi Sukses
void sukses()
{
	int i;

	system("COLOR 3D");
	gotoxy(10,2);cout<<"       7487               ";
	gotoxy(10,3);cout<<"      58  8               ";
	gotoxy(10,4);cout<<"      87  87              ";
	gotoxy(10,5);cout<<"      78   84             ";
	gotoxy(10,6);cout<<"       88   487           ";
	gotoxy(10,7);cout<<"        82    88          ";
	gotoxy(10,8);cout<<"         8     58         ";
	gotoxy(10,9);cout<<"   7544228      782       ";
	gotoxy(10,10);cout<<"787              088887  ";
	gotoxy(10,11);cout<<"8  74477707          78  ";
	gotoxy(10,12);cout<<"78      788           8  ";
	gotoxy(10,13);cout<<" 8422557  78          8  ";
	gotoxy(10,14);cout<<" 87     72785         8  ";
	gotoxy(10,15);cout<<"  087777   287    77788  ";
	gotoxy(10,16);cout<<"    82777227 87  88777   ";
	gotoxy(10,17);cout<<"      85    7007087      ";
	gotoxy(10,18);cout<<"       225158772         ";

	for(i=1;i<15;i++)
	{
   Sleep(200);
   gotoxy(i-1,20); cout<<" ";
   gotoxy(i,20); cout<<"TRANSAKSI SUKSES";
   }
}




