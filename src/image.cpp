#include <C:\Users\Сергей\Documents\Visual Studio 2013\Projects\helptogo\src\image.h>
#include <SFML/Graphics.hpp>

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
	_sprite.setTextureRect(sf::IntRect(_rect.left, _rect.top, x, y));
}

Image::Image(sf::Texture &img){
	_sprite.setTexture(img);
	_rect = sf::FloatRect(0, 0, 40, 40);
}

void Image::Render(){
	sf::RenderTexture texture;
	texture.create(_rect.width, _rect.height);
	texture.draw(_sprite);
	texture.display();
}