#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

class MyCustomLevelPopup : public geode::Popup<std::string const&> {
protected:
    // Quitamos el override por ahora para que no de error si no detecta la base
    bool setup(std::string const& value) override; 

public:
    static MyCustomLevelPopup* create(std::string const& text);
};
