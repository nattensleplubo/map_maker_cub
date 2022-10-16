#include "maker.h"

int	print_menu(int keycode)
{
	if (keycode == KEY_UP /*&& i <= 100*/)
		_data()->map_size++;
	else if (keycode == KEY_DOWN && _data()->map_size != 0)
		_data()->map_size--;
	return (0);
}