#ifndef NT_TYPE_H
#define NT_TYPE_H

#include "boost/python/dict.hpp"
#include "PvObject.h"

class NtType : public PvObject
{
public:
    static const char* NtTypeStructureId;
    NtType(const NtType& ntType); 
    virtual ~NtType();
protected:
    NtType(const boost::python::dict& pyDict, const std::string& structureId=NtTypeStructureId);
    NtType(const epics::pvData::PVStructurePtr& pvStructurePtr);
};

#endif