//
// Created by XIXI on 2026/7/16.
//
#include<string>
#include<vector>
#include<unordered_map>

#ifndef TINYIME_DICTIONARY_H
#define TINYIME_DICTIONARY_H
//class Application;
class Dictionary {
    //friend Application;
    std::string m_name;
    std::unordered_map<std::string,std::vector<std::string>> m_words;

public:
    Dictionary() = default;
    Dictionary(std::string name_) :
    m_name(name_){};
    const std::string &name()const {
        return m_name;
    }
    void load(const std::string &filename);
    const std::vector<std::string> &search(const std::string &pinyin) const;
    void clear();
    std::size_t size() const;
    //std::vector<std::vector<int>> vec{10};
};

#endif //TINYIME_DICTIONARY_H
