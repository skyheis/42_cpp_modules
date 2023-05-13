#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <iostream>

class Sample {

public:

    char    a1;
    int     a2;
    float   a3;
    int     foo;

    Sample(char p1, int p2, float p3);
    ~Sample(void);
    
    void    bar(void);
};

#endif