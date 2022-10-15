// TODO :
// Get the menu going for now :)

#include "maker.h"

void	data_init(t_data *data)
{
	data->curs_coord[0] = 0;
	data->curs_coord[1] = 0;
	data->graphics = malloc(sizeof(t_mlx));
}

t_data	*_data(void)
{
	static t_data	*data = NULL;

	if (!data)
	{
		data = malloc(sizeof(t_data));
		data_init(data);
	}
	return (data);
}

void	menu(void)
{
	_data()->graphics->mlx_ptr = mlx_init();
	_data()->graphics->menu_ptr = mlx_new_window(_data()->graphics->mlx_ptr, MENU_HEIGHT, MENU_WIDTH, "MENU");
	_data()->graphics->menu_img.image = mlx_new_image(_data()->graphics->mlx_ptr, MENU_WIDTH, MENU_HEIGHT);
}

void	init(void)
{
	_data()->graphics->mlx_ptr = NULL;
	_data()->graphics->menu_ptr = NULL;
	_data()->graphics->menu_img.image = NULL;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	(void)argv;
	init();
	menu();
}