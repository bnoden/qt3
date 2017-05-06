#ifndef MACDATA_H
#define MACDATA_H


class MacData
{
public:
    static MacData& instance();
    virtual ~MacData();

    virtual void init()=0;
    virtual double cpuLoadAverage()=0;
    virtual double memoryUsed()=0;

protected:
    explicit MacData();

private:
    // Since only one instance of the object must exist (in Singleton), allowing the copy constructor and the
    // assignment operator is nonsense. One way to solve the problem is to make them
    // private. Another way is to define the function with delete.
    MacData(const MacData& rhs)=delete;
    MacData& operator=(const MacData& rhs)=delete;
};

#endif // MACDATA_H
