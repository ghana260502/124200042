#include <iostream>
#include <iomanip>

using namespace std;
main()
{
	string u_name = "ghanaardians";
	int pass,matkul;
	float a,b,c,sum_1,x,y,z,sum_2;
	
	cout << "============login akun=====================" <<endl;
	cout << "Username : "; 
	cin >> u_name ;
	cout << "Password : "; 
	cin >> pass ;
	cout << "===========================================" <<endl;
	
	if (u_name == "ghanaardians" && pass == 260502) {
		cout << "login berhasil" <<endl;
	} else if (u_name != "ghanaardians" && pass == 260502) {
		cout << "username anda salah!" <<endl;
		exit (0);
	} else if (u_name == "ghanaardians" && pass != 260502) {
		cout << "password anda salah!" <<endl;
		exit (0);
	} else {
		cout << "username dan pasword anda salah!" <<endl;
		exit (0);
	}
	cout << endl;
	
	cout << "input nilai mata kuliah" <<endl;
	cout << "\n1 Algoritma dan pemrograman\n2 Kalkulus\n" <<endl;
	cout << "pilih : ";
	cin >> matkul ;
	cout << endl;
	
	switch (matkul) {
		case 1 :
		cout << "Nilai harian : ";
		cin >> a;
		cout << "Nilai uts : ";
		cin >> b;
		cout << "Nilai uas : ";
		cin >> c;
		cout << endl;
		
		sum_1 = (a+b+c)/3 ;
		
		if (sum_1 >= 80) {
			cout << setprecision(2) << fixed << "Anda lulus Algoritma dan pemrograman dengan nilai " << sum_1;
		}else if (sum_1 < 80) {
			cout << setprecision(2) << fixed << "Anda tidak lulus Algoritma dan pemrograman dengan nilai " << sum_1;
		}
		break;
		
		case 2 :
		cout << "Nilai harian : ";
		cin >> x;
		cout << "Nilai uts : ";
		cin >> y;
		cout << "Nilai uas : ";
		cin >> z;
		cout << endl;
		
		sum_2 = (x+y+z)/3 ;
		
		if (sum_2 >= 80) {
			cout << setprecision(2) << fixed << "Anda lulus Kalkulus dengan nilai " << sum_2;
		}else if (sum_2 < 80) {
			cout << setprecision(2) << fixed << "Anda tidak lulus Kalkulus dengan nilai " << sum_2;
		}
		break;
		
		default :
		matkul = 0;
		cout << "Input anda salah!" <<endl;
	}
		
		
		
	return 0;
}

