#include <QtGlobal>
#include <QVector>
#include "macdata.h"

typedef struct_FILETIME FILETIME;

#ifndef MACDATAWIN_H
#define MACDATAWIN_H


class MacDataWin : public MacData
{
public:
    MacDataWin();

    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    qulonglong convertFileTime(const FILETIME& filetime) const;
    QVector<qulonglong> mCpuLoadLastValues;
};

#endif // MACDATAWIN_H
