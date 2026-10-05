#include "player.h"
using namespace sf;
using namespace std;

void Player::update(double dt) {
    //Move in four directions based on keys
    sf::Keyboard::A,   // Player Up
    sf::Keyboard::S,   // Player Down
    sf::Keyboard::A,   // Player Left
    sf::Keyboard::D,   // Player Right
    Entity::update(dt);
}

Player::Player()
    : Entity(make_unique<CircleShape>(_radius_)) {
    _shape->setFillColor(Color::Magenta);
    _shape->setOrigin(sf::Vector2f(_radius, _radius_));
}

void Player::render(sf::RenderWindow& window) const {
    window.draw(*_shape);
}