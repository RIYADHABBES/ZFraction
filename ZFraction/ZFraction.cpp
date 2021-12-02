#include "ZFraction.h"
#include <iostream>

ZFraction::ZFraction() : m_num(0),m_den(1)
{
}

ZFraction::ZFraction(double num , double den ) : m_num(num)
{
	while (den == 0)
	{
		std::cout<<"\033[31m" << "Error: Denominator = 0 is Forbidden\n"<<"\033[0m" <<"Give another Denominator : ";
		std::cin >> den;
		std::cin.ignore();
	}
	m_den = den;

	(*this).Irreductible();
}

ZFraction::ZFraction(double num) : m_num(num),m_den(1)
{
}

ZFraction::~ZFraction()
{
}

void ZFraction::Affiche() const
{
	std::cout << m_num << "/" << m_den;
}

void ZFraction::Irreductible()
{
	int pgcd(PGCD(m_num, m_den));
	m_num /= pgcd;
	m_den /= pgcd;
}

int ZFraction::PGCD(int a, int b)
{
		
		while (a != b)
			if (a > b)
				a -= b;
			else
				b -= a;
		return a;
	
}

void ZFraction::Inverse()
{
	double z(m_den);
	m_den = m_num;
	m_num = z;

}

std::ostream& operator<<(std::ostream& flux, ZFraction const& a)
{
	flux << a.m_num << "/" << a.m_den;
	return flux;
}

std::istream& operator>>(std::istream& flux, ZFraction & a)
{
	std::cout << "Donnez le Numerateur ";
	flux >> a.m_num;
	//flux.ignore();

	std::cout << "Donnez le Denumerateur ";
	flux >> a.m_den;
	//flux.ignore();

	return flux;
}

ZFraction& ZFraction::operator+=(ZFraction const& b)
{
	*this = (*this) + b;
	return *this;
}

ZFraction& ZFraction::operator-=(ZFraction const& b)
{
	*this = (*this) - b;
	return *this;
}

ZFraction& ZFraction::operator*=(ZFraction const& b)
{
	*this = (*this) * b;
	return *this;
}

ZFraction& ZFraction::operator/=(ZFraction const& b)
{
	*this = (*this) / b;
	return *this;
}

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
	double communDiv(a.m_den * b.m_den);
	ZFraction result;
	result.m_den = communDiv;
	result.m_num = a.m_num * b.m_den + b.m_num * a.m_den;
	result.Irreductible();
	return result;
}

ZFraction operator-(ZFraction const& a, ZFraction const& b)
{
	double communDiv(a.m_den * b.m_den);
	ZFraction result;
	result.m_den = communDiv;
	result.m_num = a.m_num * b.m_den - b.m_num * a.m_den;
	result.Irreductible();
	return result;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
	ZFraction result;
	result.m_num = a.m_num * b.m_num;
	result.m_den = a.m_den * b.m_den;
	result.Irreductible();
	return result;
}

ZFraction operator/(ZFraction const& a, ZFraction const& b)
{
	ZFraction result;
	result.m_num = a.m_num * b.m_den;
	result.m_den = a.m_den * b.m_num;
	result.Irreductible();
	return result;
}

bool operator<(ZFraction const& a, ZFraction const& b)
{
	
	return (a.m_num*b.m_den < b.m_num * a.m_den);
}

bool operator>=(ZFraction const& a, ZFraction const& b)
{
	
	return !(a.m_num * b.m_den < b.m_num* a.m_den);
}

bool operator>(ZFraction const& a, ZFraction const& b)
{
	
	return (a.m_num * b.m_den > b.m_num* a.m_den);
}

bool operator<=(ZFraction const& a, ZFraction const& b)
{
	
	return !(a.m_num * b.m_den > b.m_num * a.m_den);
}

bool operator==(ZFraction const& a, ZFraction const& b)
{
	return (a.m_num * b.m_den == b.m_num * a.m_den);
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
	return !(a.m_num * b.m_den == b.m_num * a.m_den);
}
