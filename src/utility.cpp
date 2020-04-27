#include <stdexcept>
#include <utility.h>

namespace xlang {
    std::string toString(const std::string &temp) {
        std::string ret = "";
        int i = 0;
        while (temp[i]) {
            switch (temp[i]) {
                case '\\': {
                    ++i;
                    switch (temp[i]) {
                        case 'n': ret += '\n'; break;
                        case 't': ret += '\t'; break;
                        case 'r': ret += '\r'; break;
                        case 'a': ret += '\a'; break;
                        case 'b': ret += '\b'; break;
                        case 'f': ret += '\f'; break;
                        case 'v': ret += '\v'; break;
                        case '\\': ret += '\\'; break;
                        case '\'': ret += '\''; break;
                        case '\"': ret += '\"'; break;
                        default: {
                            throw std::runtime_error("String Format is Wrong: " + temp);
                        }
                    }
                } break;
                default: ret += temp[i];
            }   
            ++i;
        }
        return ret;
    }
}
