#ifndef DEF_TIME
#define DEF_TIME

class Timme
{
    public:

        Timme(int hours = 0, int minutes = 0, int seconds = 0);
        ~Timme();
        bool isEqual(Timme const& a) const;
        bool isLessThan(Timme const& b) const;
        Timme& operator+=(const Timme &timme);
        void verify() const;

    private:

        int m_hours;
        int m_minutes;
        int m_seconds;
};

bool operator==(Timme const& a, Timme const& b);
bool operator!=(Timme const& a, Timme const& b);
bool operator<(Timme const& a, Timme const& b);
Timme operator+(Timme const& a, Timme const& b);

#endif // DEF_TIME
