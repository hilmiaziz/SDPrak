#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define N_Movies 5
struct movies_t{
	char title[50];
	int year;
}films[N_MOVIES];

void printmovie (movies_t movie);

int main(){
	char buffer[50];
	int n;
	for(n=0;n<N_MOVIES;n++){
		cout<<" Masukan Judul Film = ";
		cin.getline(films[n].title,50);
		cout<<" Masukan Tahun =  ;"
		cin.getline(buffer,50);
		films(n) = atoi(buffer);
	}
	cout<<"\n Film yang menjadi favorit kamu : \n";
	for(n=0;n<N_MOVIES;n++)
		printmovie(films[n])
		return 0;
}
	void printmovie(movies_t movie){
		cout<<movie.title;
		cout<<"("<<movies.year<<")\n";
	}

