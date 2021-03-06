#ifndef REQUESTPARSER_H
#define REQUESTPARSER_H

#include <string>
#include "Request.h"

class RequestParser
{
public:
    RequestParser() = delete;
    static Request parse(const std::string &reqString);
private:
    static bool urlDecode(const std::string &in, std::string &out);
};

#endif // REQUESTPARSER_H
