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
  cout << "\t\t\t\tTapsyryz  " << sum << " tenge boldy" << endl;
  cout << "\t\t\t\tZakaz beru ushin card nomer engiziniz:  ";
  cin >> car;
  cout << "\t\t\t\tTapsyrys qabyldandy " << endl;
  cout<< "\t\t\t\tTapsyryz dayn bolganda habarlaimyz" << endl;
  cout<<"\t\t\t\tbailanys nomer: +77007531710"<<endl<<"\t\t\t\tEmail:umarovsherzod004@gmail.com"<<endl;
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
      {1, "Cvets", "Roza", 7, 50, "plenka", 8900},
      {2, "DI", "Alstremia", 12, 80, "aqva bumaga", 9800},
      {3, "Studio", "Roza jane Gerbera", 6, 30, "plenka", 6500},
      {4, "Prime", "Astra", 25, 70, "bumaga", 23900},
      {5, "Cvetogis", "Roza", 101, 50, "aqva bumaga", 70000}};
  cout << "\t\t\t\t\t*****************" << endl;
  cout << "\t\t\t\t\t * Flower Shop  *" << endl;
  cout << "\t\t\t\t\t*****************" << endl;
  cout << "\t\t\t\tTizimder:" << endl;
  cout << "\t\t\t\t1.-Buket" << endl << "\t\t\t\t2.-Dana gulder" <<endl<<"\t\t\t\t3.-Izdeu(Poisk)"<<endl<<"\t\t\t\t0.-Bagdarlamadan shygu ushin tizimdeginen basqa tanba engiziniz"<<endl;
  cout<<"\t\t\t\t";
  int a, b, c,sht, car;
  cin >> a;
  switch (a) {
    case 1:
      cout << "\t\t\t\tSiz Buket tandadynyz" << endl;
      for (int i = 0; i < m; i++) {
        bukets(arr[i]);
      }
      cout << "\t\t\t\tTapsyrys beriniz:" << endl;
      cin >> b;
      switch (b) {
        case 1:
          cout << "\t\t\t\tSiz Cvet prime tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 2:
          cout << "\t\t\t\tSiz Di Flowers tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 3:
          cout << "\t\t\t\tSiz Studio flower tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 4:
          cout << "\t\t\t\tSiz Prime tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        case 5:
          cout << "\t\t\t\tSiz Cvetogis tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += arr[b - 1].bukbag;
          }
          zak(sum, car);
          break;
        default:
          cout << "\t\t\t\tQate nomer tandadynyz!";
      }
          break;
    case 2:
      cout << "\t\t\t\tSiz  Dana gulder tandadynyz:" << endl;
      for (int i = 0; i < n; i++) {
        guls(mas[i]);
      }
      cout << "\t\t\t\tTapsyrys beriniz:" << endl; 
      cin >> c;
      switch (c) {
        case 1:
          cout << "\t\t\t\tSiz Roza gulin tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += mas[c - 1].bag;
          }
          zak(sum, car);
          break;
        case 2:
          cout << "\t\t\t\tSiz tulpan gulin tandadynyz" << endl
               << "\t\t\t\tQansha dana algynyz keledy:" << endl;
          cin >> sht;
          for (int i = 0; i < sht; i++) {
            sum += mas[c - 1].bag;
          }
          zak(sum, car);
          break;
    case 3:
      cout << "\t\t\t\tSiz Lilia gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 4:
      cout << "\t\t\t\tSiz Gerber gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 5:
      cout << "\t\t\t\tSiz Kally gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 6:
      cout << "\t\t\t\tSiz Georgin gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 7:
      cout << "\t\t\t\tSiz Pion gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    case 8:
      cout << "\t\t\t\tSiz Astra gulin tandadynyz" << endl
           << "\t\t\t\tQansha dana algynyz keledy:" << endl;
      cin >> sht;
      for (int i = 0; i < sht; i++) {
        sum += mas[c - 1].bag;
      }
      zak(sum, car);
      break;
    default:
  	cout<<"\t\t\t\tQate nomer tandadynyz!";
  }
  break;
  case 3:
  	char s[10];
  
    cout << "\t\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\t|          Izdeu              |" << endl;
    cout << "\t\t\t\t\t===============================" << endl;
    cout << "\t\t\t\t\t| Izdeu:\t ";
  	cin>>s;
    cout << "\t\t\t\t\t|-------------------------------" << endl;
    cout << "\t\t\t\t\t|-------------------------------" << endl;
    cout << "\t\t\t\t\t| Izdeu Natijelery :           |" << endl;
    cout << "\t\t\t\t\t|-------------------------------" << endl;
  	bool found = false;
  	for ( int i=0; i<m; i++){
  		if(arr[i].bukaty == s){
  cout << "\t\t\t\tBuket nomeri:" << arr[i].buknum << endl;
  cout << "\t\t\t\tBuket turi:" << arr[i].bukaty << endl;
  cout << "\t\t\t\tBukettegi gul:" << arr[i].gul << endl;
  cout << "\t\t\t\tBukettegi gul danasy:" << arr[i].sht << endl;
  cout << "\t\t\t\tBuket razmeri:" << arr[i].razmer << " sm" << endl;
  cout << "\t\t\t\tBuket orau turi:" << arr[i].up << endl;
  cout << "\t\t\t\tBuket bagasy:" << arr[i].bukbag << "  tenge" << endl;
  cout <<"\t\t\t\t-------------------------------"<<endl;
  found = true;
		}
	  }
  	bool found2 = false;
  	for ( int i=0; i<n; i++){
  		if(mas[i].gulaty == s){
  cout << "\t\t\t\tGul nomeri:" << mas[i].gulnum << endl;
  cout << "\t\t\t\tGul turi:" << mas[i].gulaty << endl;
  cout << "\t\t\t\tGul tusi:" << mas[i].tus << endl;
  cout << "\t\t\t\tGul olshemi:" << mas[i].raz << endl;
  cout << "\t\t\t\tGul bagasy:" << mas[i].bag << "  tenge" << endl;
  cout <<"\t\t\t\t-------------------------------"<<endl;
  found2 = true;
		  }
}
  	if(!found2 && !found){
  		cout<<"\t\t\t\tOndai Natije joq";
	  }

	  }
}
