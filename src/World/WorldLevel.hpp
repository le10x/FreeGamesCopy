#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

// Cambiamos el nombre para que no choque con nada de GD
class MyCustomLevelPopup : public geode::Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override;

public:
    static MyCustomLevelPopup* create(std::string const& text);
};
