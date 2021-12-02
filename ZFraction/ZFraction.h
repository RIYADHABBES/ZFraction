#ifndef  Z_FRACTION
#define Z_FRACTION

#include <iostream>
#include <ostream>
#include <istream>
class ZFraction
{
public:

	ZFraction();
	ZFraction(double num , double den);
	ZFraction(double num);
	~ZFraction();
	void Affiche() const;
	

	void Irreductible();
	int PGCD(int a, int b);
	void Inverse();
	friend ZFraction operator+(ZFraction const& a, ZFraction const& b);
	friend ZFraction operator-(ZFraction const& a, ZFraction const& b);
	friend ZFraction operator*(ZFraction const& a, ZFraction const& b);
	friend ZFraction operator/(ZFraction const& a, ZFraction const& b);
	friend bool operator<(ZFraction const& a, ZFraction const& b);
	friend bool operator>=(ZFraction const& a, ZFraction const& b);
	friend bool operator>(ZFraction const& a, ZFraction const& b);
	friend bool operator<=(ZFraction const& a, ZFraction const& b);
	friend bool operator==(ZFraction const& a, ZFraction const& b);
	friend bool operator!=(ZFraction const& a, ZFraction const& b);
	friend std::ostream& operator<<(std::ostream &flux, ZFraction const& a);
	friend std::istream& operator>>(std::istream& flux, ZFraction & a);



	ZFraction& operator+=(ZFraction const& b);
	ZFraction& operator-=(ZFraction const& b);
	ZFraction& operator*=(ZFraction const& b);
	ZFraction& operator/=(ZFraction const& b);






private:

	double m_num;
	double m_den;

};



#endif // ! 


