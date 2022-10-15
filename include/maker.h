#ifndef MAKER_H

# define MAKER_H

//! DEFINES
# define MENU_WIDTH 500
# define MENU_HEIGHT 500

# define TILE_SIZE 10

//!LIBRARIES
# include <mlx.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <math.h>
# include <limits.h>
# include "libft.h"

//! STRUCTS
typedef struct	s_data
{
	char	*map_name;
	int		fd;
	
	char			**map;
	int				map_size;
	int				curs_coord[2];
	struct s_mlx	*graphics;
	
}	t_data;

typedef struct	s_img
{
	void	*image;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}				t_img;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*editor_ptr;
	void	*menu_ptr;
	t_img	menu_img;
	t_img	editor_img;
}	t_mlx;


#endif
