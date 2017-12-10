#ifndef ENCRYPTION_H
#define ENCRYPTION_H

//dont use member function decrypt(int). it was only defined to make the source code shorter.
class Encryption
{
    public:
        explicit Encryption(int);
        void encryptNumber();
        int decrypt(int);
        void decryptNumber();
        void getNumber() const;
        void setNumber(int);


    private:
        int number;
};

#endif // ENCRYPTION_H
