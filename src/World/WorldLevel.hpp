#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude; // ESTO ES VITAL

class MyCustomLevelPopup : public geode::Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override; 

public:
    static MyCustomLevelPopup* create(std::string const& text);
};
