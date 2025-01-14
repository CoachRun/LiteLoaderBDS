// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SyncActorPropertyPacket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCACTORPROPERTYPACKET
public:
    class SyncActorPropertyPacket& operator=(class SyncActorPropertyPacket const&) = delete;
    SyncActorPropertyPacket(class SyncActorPropertyPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SyncActorPropertyPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*
    inline  ~SyncActorPropertyPacket(){
         (SyncActorPropertyPacket::*rv)();
        *((void**)&rv) = dlsym("??1SyncActorPropertyPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    inline enum StreamReadResult _read(class ReadOnlyBinaryStream& a0){
        enum StreamReadResult (SyncActorPropertyPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@SyncActorPropertyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void write(class BinaryStream& a0) const{
        void (SyncActorPropertyPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@SyncActorPropertyPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */
    MCAPI SyncActorPropertyPacket(class Actor const&);
    MCAPI SyncActorPropertyPacket();

protected:

private:

};