/*
 * Copyright (C) 2023+ Firelands Core Project , released under AGPL v3 license: https://github.com/FirelandsProject/firelands-cata/blob/master/LICENSE
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"
#include "Chat.h"

enum MyPlayerFirelandsString
{
    HELLO_WORLD = 100001
};

// Add player scripts
class MyPlayer : public PlayerScript
{
public:
    MyPlayer() : PlayerScript("MyPlayer") {}

    void OnLogin(Player *player, bool fistLogin) override
    {
        if (sConfigMgr->GetBoolDefault("MyModule.Enable", false))
        {
            ChatHandler(player->GetSession()).PSendSysMessage(HELLO_WORLD);
        }
    }
};

// Add all scripts in one
void AddMyPlayerScripts()
{
    new MyPlayer();
}
