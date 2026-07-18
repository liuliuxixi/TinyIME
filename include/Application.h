//
// Created by XIXI on 2026/7/16.
//
#include"Dictionary.h"
#ifndef TINYIME_APPLICATION_H
#define TINYIME_APPLICATION_H
class Application {
public:
    Application() = default;
    Application (std::initializer_list<std::string> lst);
    void load_all_dict();
    void run(const Dictionary &vary_dict);
private:
    std::vector<Dictionary> m_dictionaries;
};
#endif //TINYIME_APPLICATION_H
