#include <SFML/Graphics.hpp>
#include <string.h>

class Image {
public:
	//доступные функции
		 Image(sf::Texture &img);

	void Render();
	bool Update(float dt);
	void Show(); 
	void Hide();

	sf::Sprite SetImage(const std::string&);
	sf::Sprite GetSprite() const;
	void	   SetPos(float x, float y);
	void	   SetSize(float w, float h);
	
private:
private:
	sf::Sprite	  _sprite;
	sf::FloatRect _rect;
};