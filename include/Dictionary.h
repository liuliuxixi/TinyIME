//
// Created by XIXI on 2026/7/16.
//
#include<string>
#include<vector>
#include<unordered_map>
#ifndef TINYIME_DICTIONARY_H
#define TINYIME_DICTIONARY_H
class Dictionary {

    std::unordered_map<std::string,std::vector<std::string>> m_words;

public:

    void load(const std::string &filename);
    const std::vector<std::string> &search(const std::string &pinyin) const;
    void clear();
    std::size_t size() const;
};

#endif //TINYIME_DICTIONARY_H
