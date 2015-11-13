#pragma once

#include "Cmd.h"

class Getter : public Cmd {
private:

    const std::string commandName_ = "GET";

public:

    Getter(redisHashTable* hashTable);

    std::string getName();

    RedisValue exec(RedisValue args);

};
