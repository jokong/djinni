// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include <string>
#include <utility>
#include <vector>

struct ItemList final {
    std::vector<std::string> items;

    ItemList(std::vector<std::string> items)
    : items(std::move(items))
    {}
};