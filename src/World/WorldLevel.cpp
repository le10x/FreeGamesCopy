#include <Geode/Geode.hpp>
#include <Geode/ui/Popup.hpp>
#include "WorldLevel.hpp"

using namespace geode::prelude;

// Definición de la clase que hereda de Popup
class WorldLevelPopup : public geode::Popup<std::string const&> {
protected:
    bool setup(std::string const& value) override {
        this->setID("worldLevelPopup"_spr);
        this->setTitle("Nivel"); // Agregamos un título

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        auto label = CCLabelBMFont::create(value.c_str(), "bigFont.fnt");
        
        // En Geode v5 es mejor usar m_mainLayer para añadir cosas al Popup
        label->setPosition(m_mainLayer->getContentSize() / 2);
        m_mainLayer->addChild(label);

        return true;
    }

public:
    static WorldLevelPopup* create(std::string const& text) {
        auto ret = new WorldLevelPopup();
        // 400.f es el ancho, 280.f es el alto
        if (ret && ret->initAnchored(400.f, 280.f, text)) {
            ret->autorelease();
            return ret;
        }
        CC_SAFE_DELETE(ret);
        return nullptr;
    }
};
