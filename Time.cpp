#include <iostream>
#include "Time.hpp"

using namespace std;

Timme::Timme(int hours, int minutes, int seconds):m_hours(hours), m_minutes(minutes), m_seconds(seconds)
{

}

Timme::~Timme()
{

}

bool Timme::isEqual(Timme const& b) const
{
    if (m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds == b.m_seconds)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator==(Timme const& a, Timme const& b)
{
    return a.isEqual(b);
}

bool operator!=(Timme const& a, Timme const& b)
{
    return not (a == b);
}


bool operator<(Timme const& a, Timme const& b)
{
    return a.isLessThan(b);
}

bool Timme::isLessThan(Timme const& b) const
{
    if(m_hours < b.m_hours)
    {
        return true;
    }
    else if(m_hours == b.m_hours && m_minutes < b.m_minutes)
    {
        return true;
    }
    else if(m_hours == b.m_hours && m_minutes == b.m_minutes && m_seconds < b.m_seconds)
    {
        return true;
    }
    else
    {
        return false;
    }
}


Timme operator+(Timme const& a, Timme const& b)
{
    Timme copie(a);
    copie += b;
    return copie;
}

Timme& Timme::operator+=(const Timme &timme2)
{
    m_seconds += timme2.m_seconds;
    m_minutes += m_seconds / 60;
    m_seconds %= 60;

    m_minutes += timme2.m_minutes;
    m_hours += m_minutes / 60;
    m_minutes %= 60;

    m_hours += timme2.m_hours;

    return *this;
}

void Timme::verify() const
{
    cout << m_hours << "h" << m_minutes << "m" << m_seconds << "s" << endl;
}
