// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class ScriptBlockStateComponent {
public:
    virtual ~ScriptBlockStateComponent();
    virtual void unk_vfn_1();
    virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Block const&, class BlockSource&, class BlockPos const&, class ScriptApi::ScriptObjectHandle const&);
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Block const&, class BlockSource&, class BlockPos const&, class ScriptApi::ScriptObjectHandle&);
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, class Block const&, class BlockSource&, class BlockPos const&, bool&);
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();

private:
    MCAPI static class HashedString const mHash;
};