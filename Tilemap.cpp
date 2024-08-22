#include "Tilemap.hpp"
#include <iostream>

#define TILEWIDTH 32

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
	int tileOffsetX = TileOffsetX();
	int tileOffsetY = TileOffsetY();


	int tilesAcross = ScreenWidth / TILEWIDTH;
	int tilesDown = ScreenHeight / TILEWIDTH;


	for (int y = tileOffsetY; y < tilesDown + tileOffsetY; y++)
	{
		if (y < 0 || y >= 1000) continue;

		for (int x = tileOffsetX; x < tilesAcross + tileOffsetX ; x++)
		{

			if (x < 0 || x >= 1500) continue;

			int tx = map[y][x * 3] - 'a';
			int ty = map[y][x * 3 + 1] - 'a';


			if (tx < 0 || ty < 0) continue;


			Tmpl8::Pixel* src = tiles.GetBuffer() + tx * TILEWIDTH + ty * TILEWIDTH * tiles.GetWidth();
			Tmpl8::Pixel* dst = screen->GetBuffer() + (x - tileOffsetX) * TILEWIDTH + (y - tileOffsetY) * TILEWIDTH * ScreenWidth;

			for (int i = 0; i < TILEWIDTH; i++)
			{
				for (int j = 0; j < TILEWIDTH; j++)
				{
					dst[j] = src[j];
				}

				src += tiles.GetWidth();
				dst += ScreenWidth;
			}
		}
	}
}
