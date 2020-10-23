#include <iostream>
using namespace std;

int main()
{
	int ayah, ibu, anak1, anak2, bantuan1, bantuan2, bantuan3, bantuan4, total;
	
	cout <<"-----------------------------------------------------------------" <<endl;
	cout <<"Tugas 2 prak Algoritma dan Pemrograman" <<endl;
	cout <<"Nama  : Ghana ardian ilham samudra" <<endl;
	cout <<"Nim   : 124200042" <<endl;
	cout <<"-----------------------------------------------------------------" <<endl;
	cout <<"-----------------------------------------------------------------" <<endl;
	cout <<"    Bantuan Bencana Alam     "<<endl;
	cout <<"-----------------------------------------------------------------" <<endl;
	cout <<" "<< endl;
	
	cout <<"Usia ayah  :";
	cin >> ayah;
	
	//if ayah
	if (ayah >0 && ayah <=12)//anak - anak
	{
		bantuan1 = 15000*30;
	}
	else if (ayah >12 && ayah <=20)//remaja
	{
		bantuan1 = 20000*30;
	}
	else if (ayah >20)//dewasa
	{
		bantuan1 = 30000*30;
	}
	
	cout <<"usia ibu  :";
	cin >> ibu;
	
	//if ibu
	if (ibu >0 && ibu <=12)//anak - anak
	{
		bantuan2 = 15000*30;
	}
	else if (ibu >12 && ibu <=20)//remaja
	{
		bantuan2 = 20000*30;
	}
	else if (ibu >20)//dewasa
	{
		bantuan2 = 30000*30;
	}
	
	cout <<"usia anak1  :";
    cin >> anak1;
    
    //if anak1
    if (anak1 >0 && anak1 <=12)//anak - anak
    {
		bantuan3 = 15000*30;
	}
	else if (anak1 >12 && anak1 <=20)//remaja
	{
		bantuan3 = 20000*30;
	}
	else if (anak1 >20)//dewasa
	{ 
		bantuan3 = 30000*30;
	}
	
	cout <<"usia anak2  :";
	cin >> anak2;
	
	//if anak2
	if (anak2 >0 && anak2 <=12)//anak - anak
	{
		bantuan4 = 15000*30;
	}
	else if (anak2 >12 && anak2 <=20)//remaja
	{
		bantuan4 = 20000*30;
	}
	else if (anak2 >20)//dewasa
	{
		bantuan4 = 30000*30;
	}
	
	else 
	{cout <<"usia tidak sesuai "<<endl;}
	
	total = bantuan1 + bantuan2 + bantuan3 + bantuan4;
	cout <<"total bantuan yang diterima selama satu bulan sebesar rp"<<total <<endl;
	
	
	
	return 0;
}

