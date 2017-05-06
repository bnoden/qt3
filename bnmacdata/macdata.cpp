#include <QtGlobal>
#include "macdata.h"

#ifndef Q_OS_WIN
    #include "macdatawin.h"
#endif

MacData& MacData::instance() {
    #ifndef Q_OS_WIN
        static MadDataWin singleton;
    #endif

    return singleton;
}

MacData::MacData()
{

}
MacData::~MacData()
{

}
