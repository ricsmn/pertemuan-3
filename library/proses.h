using namespace std;

class Proses{
  public :
    void cetak(){
      cout<<"Anda sebagai Proses \n";
    }
    void getData(){
      ambil_Data.open("api_data.txt");
      bool ayam_geprek=true,ayam_grng=true,udang_grng=true,cumi_grng=true,ayam_bkr=true;
      while(!ambil_Data.eof()){
          if(ayam_geprek){
            ambil_Data>>bnyk_aymgprk;
            ayam_geprek=false;
          }
          else if (ayam_grng){
            ambil_Data>>bnyk_aymgrng;
            ayam_grng=false;
          }
          else if(udang_grng){
            ambil_Data>>bnyk_udggrng;
            udang_grng=false;
          }
          else if (cumi_grng){
            ambil_Data>>bnyk_cumigrng;
            cumi_grng=false;
          }
          else{
            ambil_Data>>bnyk_aymbkr;
          }
      }
    ambil_Data.close();
    }
void toFile(){
  int total=(hrg_aymgprk*bnyk_aymgprk)+(hrg_aymgrng*bnyk_aymgrng)+(hrg_udggrng*bnyk_udggrng)+(hrg_cumigrng*bnyk_cumigrng)+(hrg_aymbkr*bnyk_aymbkr);
  float ongkir=15000;
  float t2=float(total);
  t2=t2+ongkir;

    tulis_Data.open("api_data.txt");
  tulis_Data<<total<<endl;
  tulis_Data<<ongkir<<endl;
  tulis_Data<<t2<<endl;
  tulis_Data<<bnyk_aymgprk<<endl;
  tulis_Data<<bnyk_aymgrng<<endl;
  tulis_Data<<bnyk_udggrng<<endl;
  tulis_Data<<bnyk_cumigrng<<endl;
  tulis_Data<<bnyk_aymbkr;
  tulis_Data.close();
}

private :
  ifstream ambil_Data;
  ofstream tulis_Data;
  int bnyk_aymgprk;
  int bnyk_aymgrng;
  int bnyk_udggrng;
  int bnyk_cumigrng;
  int bnyk_aymbkr;
  int hrg_aymgprk = 21000;
  int hrg_aymgrng = 17000;
  int hrg_udggrng = 19000;
  int hrg_cumigrng = 20000;
  int hrg_aymbkr = 25000;
  float ongkir;
};