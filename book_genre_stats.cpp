/**
 * bank_genre_stats.cpp
 * Written by : Quang Thanh Dong (c3436943)
 * Modified: 06/10/2024
 */

#include "book_genre_stats.h"


book_genre_stats::book_genre_stats()
{

}

book_genre_stats::book_genre_stats(const std::string& genre)
{

}

const std::string& book_genre_stats::get_key() const
{

}

int book_genre_stats::get_count() const
{

}

void book_genre_stats::increment_count()
{

}
    
void book_genre_stats::decrement_count()
{

}

void book_genre_stats::add_rating(double rating)
{

}
    
void book_genre_stats::subtract_rating(double rating)
{

}

double book_genre_stats::average_rating() const
{

}

std::ostream& operator << (std::ostream& os, const book_genre_stats& s)
{

}

bool operator == (const book_genre_stats& s1, const book_genre_stats& s2)
{

}

bool operator < (const book_genre_stats& s1, const book_genre_stats& s2)
{

}

bool operator > (const book_genre_stats& s1, const book_genre_stats& s2)
{

}