#ifndef IFLYABLE_H
#define IFLYABLE_H
struct IFlyable{
    virtual void fly(int min) = 0;
    ~IFlyable();
};
#endif // IFLYABLE_H
