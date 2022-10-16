#include "maker.h"

void    ft_pixel_put(t_img *img, int x, int y, int color)
{
    char    *pixel;

    //TODO research to understand this formula cf aurelienbrabant.fr
	if (x < 0)
		return ;
	if (y < 0)
		return ;
    pixel = img->addr + (y * img->line_length + x * (img->bpp / 8));
    *(int *)pixel = color;
}

void     ft_put_rectangle(t_img *img, int x0, int y0, int x1, int y1, int color)
{
    int pY;
    int pX;

    pY = y0;
    while (pY < y0 + x1)
    {
        pX = x0;
        while (pX < x0 + y1)
            ft_pixel_put(img, pX++, pY, color);
        pY++;
    }
}