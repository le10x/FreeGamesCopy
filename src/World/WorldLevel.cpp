#include "WorldLevel.hpp"

using namespace geode::prelude;

// Implementación de WorldLevel
bool WorldLevel::setup(std::string const& value) {
    this->setID("world-level-popup"_spr);
    this->setTitle("Nivel");

    auto label = CCLabelBMFont::create(value.c_str(), "bigFont.fnt");
    label->setPosition(m_mainLayer->getContentSize() / 2);
    m_mainLayer->addChild(label);

    return true;
}

WorldLevel* WorldLevel::create(std::string const& text) {
    auto ret = new WorldLevel();
    if (ret && ret->initAnchored(400.f, 280.f, text)) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}
