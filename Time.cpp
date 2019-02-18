#include <iostream>
using namespace std;

int main (){
int bil1, bil2;
string lk,nm;
int opt; char why;
system("clear");
veve:
system("toilet -f pagga KALSEL[E]xploit  | lolcat");
cout << "           Konversi Waktu Ke Detik   " << endl;
cout << endl;
cout << "\033[97mCoded By : \033[92m®Muhammad Rafli \033[97m" << endl;
cout << "Team     : \033[92mKALSEL[E]xploit\033[97m"
 << endl;
cout << "Telegram : \033[92mhttps://t.me/RabbitCL4Y\033[97m" << endl;
cout << endl;
        int jam =3600;

        int menit =60;

        int konversi, hour, minute, second;
		char pilihan, pilihan2;

x:
		cout<<" ========================================"<<endl;
		cout<<" |	Konversi Waktu ke Detik		|"<<endl;
		cout<<" ========================================"<<endl;
		cout<<" | Masukan Data Waktu :			| "<<endl;
		cout<<" ========================================"<<endl;
		cout<<" | Masukan Jam		: ";cin>>hour;
		cout<<" | Masukan Menit	: ";cin>>minute;
		cout<<" | Masukan Detik	: ";cin>>second;
		cout<<" |					|"<<endl;
		cout<<" ========================================"<<endl;
		cout<<endl;
		cout<<" ========================================"<<endl;
		cout<<" | Apakah data di atas sudah benar ?	|"<<endl;
		cout<<" |					|"<<endl;
		cout<<" |	[Y] Yes		[N] No		|"<<endl;
		cout<<" |					|"<<endl;
		cout<<" | Masukan Pilihan [Y/N] : ";cin>>pilihan;
		cout<<" |					|"<<endl;
		cout<<" ========================================"<<endl;
y:
		if (pilihan == 'n' || pilihan == 'N'){
			cout<<endl;
			cout<<" ========================================"<<endl;
			cout<<" | Masukan data kembali ? :		|"<<endl;
			cout<<" ========================================"<<endl;
			cout<<" |					|"<<endl;
			cout<<" |	[Y] Yes		[X] Exit	|"<<endl;
			cout<<" |					|"<<endl;
		    cout<<" | Masukan Pilihan [Y/N] : ";cin>>pilihan2;
			cout<<" |					|"<<endl;
			cout<<" ========================================"<<endl;
			if (pilihan2 == 'y' || pilihan2 == 'y'){
				goto x;
			}

			else if (pilihan2 == 'x' || pilihan2 == 'X'){
				cout<<"Tekan Enter"<<endl;
				system("EXIT");
			}

			else {
				cout<<endl;
				cout<<" ========================================"<<endl;
				cout<<" | Maaf Menu yang anda minta tidak ada	|"<<endl;
				cout<<" | Mohon masukan kembali		|"<<endl;
				cout<<" ========================================"<<endl;
				goto y;
			}

		}
		else if (pilihan == 'y' || pilihan == 'Y' ){			

        konversi=hour*jam+minute*menit+second;  
		cout<<endl;
		cout<<" ========================================"<<endl;
        cout<<" | hasil dari Konversi Waktu		|"<<endl;
		cout<<" ========================================"<<endl;
		cout<<" | 				|"<<endl;
		cout<<" | "<<hour<<" jam "<<minute<<" menit "<<second<<" detik		|"<<endl;
		cout<<" | kedetik adalah : "<<konversi<<"		|"<<endl;
		cout<<" ========================================"<<endl;
		}
		else {
				cout<<endl;
				cout<<" ========================================"<<endl;
				cout<<" | Maaf Menu yang anda minta tidak ada	|"<<endl;
				cout<<" | Mohon masukan kembali		|"<<endl;
				cout<<" ========================================"<<endl;
		}
		cout<<" ========================================"<<endl;
		cout<<" | Learn more ©KALSEL[E]xploit  	  |"<<endl;
		cout<<" ========================================"<<endl;
}
