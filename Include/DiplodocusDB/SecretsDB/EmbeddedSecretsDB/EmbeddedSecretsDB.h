/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/DiplodocusDB/SecretsDB/blob/main/LICENSE.txt
*/

#ifndef _DIPLODOCUSDB_SECRETSDB_EMBEDDEDSECRETSDB_EMBEDDEDSECRETSDB_H_
#define _DIPLODOCUSDB_SECRETSDB_EMBEDDEDSECRETSDB_EMBEDDEDSECRETSDB_H_

#include <Ishiko/Errors/Error.h>
#include <boost/filesystem/path.hpp>

namespace DiplodocusDB
{

class EmbeddedSecretsDB
{
public:
    EmbeddedSecretsDB();

    void create(const boost::filesystem::path& path, Ishiko::Error& error);
};

}

#endif
