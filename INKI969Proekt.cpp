//Sandra Kolevska INKI969
#include<iostream>
#include <bits/stdc++.h> 
#include<cstring>
#include<cstring>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	string Text1,Text2,zaedno;
	
		//otvaranje na datoteka 
	ofstream DatotekaSandra("969.Proect03.txt");
		
	//deklracija na vektor i iterator
	vector<int>::iterator IterText;
	vector<int> TextVektor(100);
	//vnesuvanje na dvata stringovi
	cout<<"\n Obidetete se da vnesete tekst od oblik:  INKIBrIndex.Ime.Prezime : " <<endl;
	cout<<"  ";
	cin>>Text1;
	cout<<"\n Vnesete validen mail sto go koristite :  "<<endl;
	cout<<"  ";
	cin>>Text2;
	
	//odreduvanje na dolizni 
	int nText1=Text1.length();
	int nText2=Text2.length();
	
	//Polnenje na prviot string so prazno mesto i dopolnuvanje na vtoriot text
	zaedno.append(Text1);
	zaedno.append(" ");
	zaedno.append(Text2);
	
	//pecatenje na elementite od spoen string 
	cout<<"\n \n \n Spoeni TEXT1 i TEXT2 "<<endl;
	cout<<zaedno;
	//oderduvanje na dolzinata na stringot koj e spoen
	int dolzaedno=zaedno.length();
  	//polenje na elementite od stringot so ascii kodovite 
	for(int i=0;i<dolzaedno;i++){
		int x=(int)zaedno[i];
		TextVektor.push_back(x);
	}
	sort(TextVektor.begin(),TextVektor.end());
	//dodavanje na elementite od data vo vektorot
	TextVektor.push_back(05);
	TextVektor.push_back(04);
	TextVektor.push_back(03);
	cout<<"\n\n Prikaz na vektor od ASCII kodovi  "<<endl<<endl;
	//pecatenje na vektorot so iterator
	for(IterText=TextVektor.begin();IterText<TextVektor.end();++IterText)
	{
		if((*IterText)!=0)
		cout<<*IterText<<" ";			
	}

	//zapisuvanje na podatocite vo datotekata
	DatotekaSandra<<"\n Prv Text : "<<Text1;
	DatotekaSandra<<"\n Vtor Text : "<<Text2;
	DatotekaSandra<<"\n Zaedno Text1 Text2  : "<<zaedno<<endl;
	DatotekaSandra<<"\n Prikaz na vektor od ASCII kodovi   "<<endl<<endl;
	//zapisuvanje na vektorot vo datoteka
	for(IterText=TextVektor.begin();IterText<TextVektor.end();++IterText)
	{
		if((*IterText)!=0)
		DatotekaSandra<<*IterText<<" ";			
	}
}
