#include "WorldLevel.hpp"

using namespace geode::prelude;

bool MyCustomLevelPopup::setup() {
    this->setTitle("Información");

    auto label = CCLabelBMFont::create(m_text.c_str(), "bigFont.fnt");
    label->setScale(0.6f);
    label->setPosition(m_mainLayer->getContentSize() / 2);
    m_mainLayer->addChild(label);

    return true;
}

MyCustomLevelPopup* MyCustomLevelPopup::create(std::string const& text) {
    auto ret = new MyCustomLevelPopup();
    ret->m_text = text; // Pasamos el texto manualmente
    if (ret && ret->initAnchored(350.f, 250.f)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
