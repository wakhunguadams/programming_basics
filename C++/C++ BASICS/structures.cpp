#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct movies_t {
string title;
int year;
}mine,yours;
void printmovies(movies_t_movie);
int main()
{
    string mystr;
    mine.title="2001 A Space Odyssey";
    mine.year=1968;
    cout<<"enter title";
    getline(cin,yours.title);
    cout<<"enter year";
    getline(cin,mystr);
    stringstream(mystr)>>yours.year;
    cout<<"my favorite movie is";
    printmovies(mine);
    cout<<"and your's is";
    printmovies(yours);
    return 0;

}
void printmovie(movies_t_movie)
{
    cout<<movie.title<<"\n";
    cout<<movie.year;
}
