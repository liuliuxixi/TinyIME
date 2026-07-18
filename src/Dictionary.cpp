//
// Created by XIXI on 2026/7/16.
//
#include"Dictionary.h"
#include<fstream>
#include<sstream>
#include<stdexcept>
void Dictionary::load(const std::string &filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("cannot open dictionary file");
    }
    std::string line;
    while (std::getline(file,line)) {
        std::stringstream ss(line);
        std::string s;
        ss >> s;
        std::string word;
        auto &words = m_words[s];
        while (ss >> word) {
            words.push_back(word);
        }
    }
}
const std::vector<std::string> &Dictionary::search(const std::string &pinyin)const
{
    static std::vector<std::string> empty;
    auto it = m_words.find(pinyin);

    if (it == m_words.end()) {
        return empty;
    }

    return it -> second;
}
void Dictionary::clear() {
    m_words.clear();
}
std::size_t Dictionary::size() const{
    return m_words.size();
}