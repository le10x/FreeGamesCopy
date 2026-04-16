#pragma once
#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

// Asegúrate de usar geode::Popup explícitamente
class WorldLevel : public geode::Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override; // Cambia init por setup

public:
    static WorldLevel* create(std::string const& text);
    
    // Si esta función no existe en la clase padre de Geode, quita el 'override'
    void updatePageWithObject(cocos2d::CCObject* page, cocos2d::CCObject* object);
};
