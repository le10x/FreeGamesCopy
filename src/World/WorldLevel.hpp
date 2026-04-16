#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

// Heredamos de Popup<> sin argumentos para máxima compatibilidad
class MyCustomLevelPopup : public geode::Popup<> {
protected:
    bool setup() override; // Geode v5 prefiere setup sin argumentos si no hay plantilla

public:
    static MyCustomLevelPopup* create(std::string const& text);
    std::string m_text; // Guardamos el texto aquí
};
