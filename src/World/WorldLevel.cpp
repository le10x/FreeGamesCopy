#include "WorldLevel.hpp"

using namespace geode::prelude;

// Implementamos la función setup (que es donde va el contenido del Popup)
bool MyCustomLevelPopup::setup(std::string const& value) {
    this->setTitle("Información");

    auto winSize = CCDirector::sharedDirector()->getWinSize();
    
    // Creamos el texto
    auto label = CCLabelBMFont::create(value.c_str(), "bigFont.fnt");
    label->setScale(0.6f);
    
    // Lo añadimos al m_mainLayer (la capa principal del Popup en Geode v5)
    label->setPosition(m_mainLayer->getContentSize() / 2);
    m_mainLayer->addChild(label);

    return true;
}

// Implementamos la función create
MyCustomLevelPopup* MyCustomLevelPopup::create(std::string const& text) {
    auto ret = new MyCustomLevelPopup();
    // initAnchored crea el cuadro con el ancho y alto especificados
    if (ret && ret->initAnchored(350.f, 250.f, text)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
