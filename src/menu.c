#include "maker.h"

int	print_menu(int keycode)
{
	char	*number;

	if (keycode == KEY_UP /*&& i <= 100*/)
		_data()->map_size++;
	else if (keycode == KEY_DOWN && _data()->map_size != 0)
		_data()->map_size--;
	number = ft_itoa(_data()->map_size);
	printf("Number : %s\n", number);
	ft_put_rectangle(&_data()->graphics->menu_img, 5, 5, MENU_HEIGHT - 115, MENU_WIDTH - 115, RED);
	mlx_string_put(_data()->graphics->mlx_ptr, _data()->graphics->menu_ptr, MENU_HEIGHT / 2 , MENU_WIDTH / 2, 0x00FFFFFF, number);
	return (0);
}