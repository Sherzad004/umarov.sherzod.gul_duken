#include <iostream>
#include <string>

using namespace std;

struct buket {
  int buknum;
  string bukaty;
  string gul;
  int sht;
  int razmer;
  string up;
  int bukbag;
};
struct gul {
  int gulnum;
  string gulaty;
  string tus;
  string raz;
  int bag;
};

void bukets(buket s) {
  cout << "Buket nomeri:" << s.buknum << endl;
  cout << "Buket turi:" << s.bukaty << endl;
  cout << "Bukettegi gul:" << s.gul << endl;
  cout << "Bukettegi gul danasy:" << s.sht << endl;
  cout << "Buket razmeri:" << s.razmer << " sm" << endl;
  cout << "Buket orau turi:" << s.up << endl;
  cout << "Buket bagasy:" << s.bukbag << "  tenge" << endl;
  cout <<"-------------------------------"<<endl;
}
void guls(gul s) {
  cout << "Gul nomeri:" << s.gulnum << endl;
  cout << "Gul turi:" << s.gulaty << endl;
  cout << "Gul tusi:" << s.tus << endl;
  cout << "Gul olshemi:" << s.raz << endl;
  cout << "Gul bagasy:" << s.bag << "  tenge" << endl;
  cout <<"-------------------------------"<<endl;
}
void zak(int sum, int car) {
  cout << "Tapsyryz  " << sum << " tenge boldy" << endl;
  cout << "Zakaz beru ushin card nomer engiziniz:  ";
  cin >> car;
  cout << "Tapsyrys qabyldandy " << endl
       << "Tapsyryz dayn bolganda habarlaimyz" << endl;
}

int main() {
  const int n = 8;
  const int m = 5;
  int sum;
  gul mas[n] = {{1, "Roza", "Qyzyl", "50-60", 800},
                {2, "Tulpan", "Sary", "35-40", 600},
                {3, "Lilia", "Qyzylsary", "80-100", 1500},
                {4, "Gerber", "Qyzgylt", "30-50", 650},
                {5, "Kally", "Aq", "60-90", 800},
                {6, "Georgin", "Qyzyl", "50-80", 950},
                {7, "Pion", "Qyzgylt", "60-100", 1200},
                {8, "Astra", "Aq", "60-70", 400}};
  buket arr[m] = {
      {1, "Cvet prime", "Roza", 7, 50, "plenka", 8900},
      {2, "DI Flowers", "Alstremia", 12, 80, "aqva bumaga", 9800},
      {3, "Studio Flowers", "Roza jane Gerbera", 6, 30, "plenka", 6500},
      {4, "Prime", "Astra", 25, 70, "bumaga", 23900},
      {5, "Cvetogis", "Roza", 101, 50, "aqva bumaga", 70000}};
  cout << "   *****************" << endl;
  cout << "   *  Flower Shop  *" << endl;
  cout << "   *****************" << endl;
  cout << "Siz ne tapsyrys berginiz keledi:" << endl;
  cout << "1.Buket" << endl << "2.Dana gulder" <<endl<<"0.Bagdarlamadan shygu ushin kez kelgen  tanbany engiziniz"<<endl;
  int a, b, c,sht, car;
  cin >> a;
  switch (a) {
    case 1:
      cout << "Siz Buket tandadynyz" << endl;
      for (int i = 0; i < m; i++) {
        bukets(arr[i]);
      }
      cout << "Tapsyrys beriniz:" << endl;
      cin >> b;
      switch (b) {
        case 1:
          cout << "Siz Cvet prime tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 2:
          cout << "Siz Di Flowers tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 3:
          cout << "Siz Studio flower tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 4:
          cout << "Siz Prime tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 5:
          cout << "Siz Cvetogis tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        default:
          cout << "Qate nomer tandadynyz!";
      }
          break;
    case 2:
      cout << "Siz  Dana gulder tandadynyz:" << endl;
      for (int i = 0; i < n; i++) {
        guls(mas[i]);
      }
      cout << "Tapsyrys beriniz:" << endl; 
      cin >> c;
      switch (c) {
        case 1:
          cout << "Siz Roza gulin tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += mas[c - 1].bag;
          }
          zak(sum, car);
          break;
        case 2:
          cout << "Siz tulpan gulin tandadynyz" << endl
               << "Qansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += mas[c - 1].bag;
          }
          zak(sum, car);
          break;
    case 3:
      cout << "Siz Lilia gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 4:
      cout << "Siz Gerber gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 5:
      cout << "Siz Kally gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 6:
      cout << "Siz Georgin gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 7:
      cout << "Siz Pion gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 8:
      cout << "Siz Astra gulin tandadynyz" << endl
           << "Qansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    default:
  	cout<<"Qate nomer tandadynyz!";
  }
  break;
  default:
  	cout<<"Exit...";
}

}
