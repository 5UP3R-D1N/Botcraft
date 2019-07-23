#pragma once

#include <iostream>

#include "botcraft/Protocol/BaseMessage.hpp"

namespace Botcraft
{
    class LoginStart : public BaseMessage<LoginStart>
    {
    public:
        virtual const int GetId() const override
        {
            return 0x00;
        }

        virtual const std::string GetName() const override
        {
            return "Login Start";
        }

        void SetName(const std::string &n)
        {
            name = n;
        }

    protected:
        virtual void ReadImpl(ReadIterator &iter, size_t &length) override
        {
            std::cerr << "Severbound message" << std::endl;
        }

        virtual void WriteImpl(WriteContainer &container) const override
        {
            WriteString(name, container);
        }

    private:
        std::string name;
    };
} // Botcraft