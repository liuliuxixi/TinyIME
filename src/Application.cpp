//
// Created by XIXI on 2026/7/16.
//
#include "Application.h"
#include <iostream>
#include<string>
Application :: Application(std::initializer_list<std::string> lst) {
    for (const auto &x : lst) {
        Dictionary temp_dict(x);
        m_dictionaries.push_back(temp_dict);
    }
}
void Application :: load_all_dict() {
    for (auto &t_dict : m_dictionaries) {
        t_dict.load(t_dict.name());
    }
}
void Application :: run(const Dictionary &vary_dict) {
    std::cout << "test is OK" <<'\n';
    std::string user_word;
    while (std::cin >> user_word) {
        const std::vector<std::string> &disp = vary_dict.search(user_word);
        for (const auto &word : disp) {
            std::cout << word << " ";
        }
        std::cout << '\n';
    }

}