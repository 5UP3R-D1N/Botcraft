#pragma once

#include "botcraft/Game/Entities/entities/Entity.hpp"

namespace Botcraft
{
    class UnknownEntity : public Entity
    {
    public:
        UnknownEntity();
        virtual ~UnknownEntity();

        // Object related stuff
        virtual std::string GetName() const override;
        virtual EntityType GetType() const override;
        AABB GetCollider() const override;
    };
}
