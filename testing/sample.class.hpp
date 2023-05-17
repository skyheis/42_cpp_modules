#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

//struct are public by default
//class are private by default

class Sample {

public:

    char        a1;
    int         a2;
    int         a4;
    int         foo;

    Sample(void);                               // Canonical
    Sample(char p1, int p2, float const p3);
    Sample(Sample const & src);                 // Canonical
    ~Sample(void);                              // Canonical

    Sample& operator=(Sample const & rhs);      // Canonical

    void    publbar(void);
    int     getz1(void) const;
    void    setz1(int i);
    int     compare(Sample * other);

    static int  getninst(void);

private:

    int         _z1;
    static int  _ninst;

    //the const before {} dont allow to edit your variable
    void    _privbar(void) const;
    void    _foo(void) const;

};

#endif