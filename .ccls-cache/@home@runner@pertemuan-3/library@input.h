using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Rumah Makan Ananda \n";
      cout << "---------------------"<<endl;
			cout << "Menu : "<<endl;
			cout << "1. Ayam Geprek : 21000 \n";
			cout << "2. Ayam Goreng : 17000 \n";
      cout << "3. Udang Goreng : 19000 \n";
      cout << "4. Cumi Goreng : 20000 \n";
      cout << "5. Ayam Bakar : 25000 \n\n";
      
			cout << "Pesan Ayam Geprek : "; cin >> bnyk_aymgep;
			cout << "Pesan Ayam Goreng : "; cin >> bnyk_aymgo;
      cout << "Pesan Udang Goreng : "; cin >> bnyk_udgo;
      cout << "Pesan Cumi Goreng : "; cin >> bnyk_cumgo;
      cout << "Pesan Ayam Bakar : "; cin >> bnyk_aymbk;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymgep << endl;
			tulis_data << bnyk_aymgo << endl;
      tulis_data << bnyk_udgo << endl;
      tulis_data << bnyk_cumgo << endl;
      tulis_data << bnyk_aymbk << endl;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymgep, bnyk_aymgo, bnyk_udgo, bnyk_cumgo, bnyk_aymbk;
};