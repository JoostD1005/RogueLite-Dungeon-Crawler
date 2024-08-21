#include "Tilemap.hpp"
#include <iostream>

#define TILEWIDTH 50


int Tilemap::TileOffsetX()
{
	float x = cameraOffset.x;
	int row = static_cast<int>(std::round( x / TILEWIDTH ));

	return row;
}

int Tilemap::TileOffsetY()
{
	float y = cameraOffset.y;
	int col = static_cast<int>(std::round(y / TILEWIDTH));

	return col;
}




void Tilemap::Draw(Tmpl8::Surface* screen)
{
	for (int y = 0 + TileOffsetY(); y < 10 + TileOffsetY(); y++)
	{
		for (int x = 0 + TileOffsetX(); x < 16 + TileOffsetX() ; x++)
		{
			int tx = map[y][x * 3] - 'a';
			int ty = map[y][x * 3 + 1] - 'a';

			Tmpl8::Pixel* src = tiles.GetBuffer() + tx * TILEWIDTH + ty * TILEWIDTH * 50;
			Tmpl8::Pixel* dst = screen->GetBuffer() + x * TILEWIDTH + y * TILEWIDTH * 800;

			for (int i = 0; i < TILEWIDTH; i++)
			{
				for (int j = 0; j < TILEWIDTH; j++)
				{
					dst[j] = src[j];
				}
					src += 50;
					dst += 800;
			}
		}
	}
}
