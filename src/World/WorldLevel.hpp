#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

// Usamos el namespace explícitamente
class MyCustomLevelPopup : public geode::Popup<std::string const&> {
protected:
    // Quitamos el 'override' momentáneamente si sigue dando problemas
    bool setup(std::string const& value) override; 

public:
    static MyCustomLevelPopup* create(std::string const& text);
};
