#pragma once

#include "netPlayerData.hpp"
#include "../player/CNonPhysicalPlayerData.hpp"

namespace rage
{
#pragma pack(push, 8)
    class netPlayer
    {
    public:
        virtual ~netPlayer();
        virtual void reset();
        virtual bool is_valid();
        virtual const char* get_name();
        virtual void _0x20();
        virtual bool is_host();
        virtual netPlayerData* get_net_data();
        virtual void _0x38();

        char pad_0008[8]; //0x0008
        CNonPhysicalPlayerData *m_non_physical_player; //0x0010
        uint32_t m_msg_id; //0x0018
        char pad_001C[4]; //0x001C
        uint8_t m_active_id; //0x0020
        uint8_t m_player_id; //0x0021
        char pad_0022[3]; //0x0022
        uint16_t m_complaints; //0x0026
        char pad_0027[17]; //0x0028
        class CNetGamePlayer *m_unk_net_player_list[10]; //0x0040
        char pad_0090[4]; //0x0090
        uint64_t pad_0098; //0x0098
    }; //Size: 0x00A0
    static_assert(sizeof(netPlayer) == 0xA0);
#pragma pack(pop)
}
