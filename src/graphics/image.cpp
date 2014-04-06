#include "image.h"

sf::Sprite Image::SetImage(const std::string& link){
	sf::Texture t;
	t.loadFromFile(link);
	_sprite.setTexture(t);
	return _sprite;
}

sf::Sprite Image::GetSprite() const{
	return this->_sprite;
}

void Image::SetPos(float x, float y){
	_sprite.setPosition(x, y);
}

void Image::SetSize(float x, float y){
	_sprite.setTextureRect(sf::IntRect(static_cast<int>(_rect.left), static_cast<int>(_rect.top), static_cast<int>(x), static_cast<int>(y)));
}

Image::Image(sf::Texture &img){
	_sprite.setTexture(img);
	_rect = sf::FloatRect(0, 0, 40, 40);
}

void Image::Render(){
	sf::RenderTexture texture;
	texture.create(static_cast<size_t>(_rect.width), static_cast<size_t>(_rect.height));
	texture.draw(_sprite);
	texture.display();
}