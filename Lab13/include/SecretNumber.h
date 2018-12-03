#ifndef SECRETNUMBER_H
#define SECRETNUMBER_H


class SecretNumber
{
    public:
        SecretNumber();

        //Getter functions returns the secret number
        int getNumber();

    private:
        int number;

        //Lower Bound: the lowest possible value
        static const int lowerBound = 1;

        //Upper Bound: the highest possible value
        static const int upperBound = 10;
};

#endif // SECRETNUMBER_H
