// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AreaAttackDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AreaAttackDefinition {
#include "Extra/AreaAttackDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class AreaAttackComponent&);
    MCAPI void setDamageCause(std::string const&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>>&);
};