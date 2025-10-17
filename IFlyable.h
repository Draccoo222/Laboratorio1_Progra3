#ifndef IFLYABLE_H
#define IFLYABLE_H
struct IFlyable{
    virtual void fly(int min) = 0;
    virtual ~IFlyable() = default;
};
#endif // IFLYABLE_H
