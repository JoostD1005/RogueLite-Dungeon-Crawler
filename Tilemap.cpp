#include "Tilemap.hpp"


#define TILEWIDTH 50


void Tilemap::TileOffset()
{
	float x = cameraOffset.x;
	float y = cameraOffset.y;

	int row = x / TILEWIDTH;
	int col = y / TILEWIDTH;
}




void Tilemap::Draw(Tmpl8::Surface* screen)
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0 ; x < 16 ; x++)
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
