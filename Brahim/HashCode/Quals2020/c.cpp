//#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <vector>
typedef struct libr{
    int nb_books;
    int signup;
    int ship;
    int *books;
    int total_score;
} library;
using namespace std;

int main()
{
    int nb_books, nb_library, scan, signup, ship; book, x;
    library  *lib;
    cin>>nb_books>>nb_library>>scan;
    vector <pair<int,int> > score[nb_books];
    for(int i = 0;i < nb_books;i++)
    {
        cin >> x;
        score[i].push_back({i, x});
    }
    for(int i = 0;i < nb_books;++i)
    {
        cin >>score[i];
    }
    lib = malloc(sizeof(lib)*nb_library);
    for (i = 0; i<nb_library; i++)
    {
        cin>>x;
        lib[i]->nb_books = x;
        cin>>x;
        lib[i]->signup = x;
        cin>>x;
        lib[i]->ship = x;
        lib[i]->books = malloc(sizeof(int)*lib[i]->nb_books);
        for (int j =0; j<lib[i]->nb_books; j++)
        {
            cin>>x;
            lib[i]->books[j] = x;
        }
    }
    std::sort(score.begin(), score.end(),[](const pair& x, const pair& y) {

        if (x.second != y.second)
            return x.second < y.second;
        return x.first < y.first;
    });
}