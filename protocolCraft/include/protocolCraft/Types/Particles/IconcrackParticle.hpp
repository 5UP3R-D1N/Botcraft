#if PROTOCOL_VERSION < 393
#pragma once

#include "protocolCraft/Types/Particles/Particle.hpp"

namespace ProtocolCraft
{
    class IconcrackParticle : public Particle
    {
    public:
        IconcrackParticle();
        
        virtual ~IconcrackParticle();
        
        virtual std::string GetName() const override;
        
        virtual ParticleType GetType() const override;
        
        int GetArgument1() const;
        
        int GetArgument2() const;
        
        void SetArgument1(const int argument1_);
        
        void SetArgument2(const int argument2_);
        
    protected:
        virtual void ReadImpl(ReadIterator &iter, size_t &length) override;
        
        virtual void WriteImpl(WriteContainer &container) const override;
        
        virtual const nlohmann::json SerializeImpl() const override;
        
    private:
        int argument1;
        
        int argument2;
        
    };
}
#endif
