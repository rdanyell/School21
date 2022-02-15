#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include "libft/libft.h"

#define SCALE 50
# define WALL "./img/bush.xpm"
# define FLOOR "./img/grass.xpm"
# define COIN "./img/carrot.xpm"
# define PLAYER "./img/rabbit.xpm"
# define EXIT "./img/exit.xpm"
# define KEYUP 13
# define KEYDOWN 1
# define KEYRIGHT 2
# define KEYLEFT 0
# define KEYD 124
# define KEYA 123
# define KEYW 126
# define KEYS 125

typedef struct s_info
{
	void		*mlx;
	void		*win;
	void		*img;
	int			width;
	int			height;
	char		**map;
	int			moves;
	int			coins;
	int			players;
	int			exit;
	int			x;
	int			y;
}	t_info;

void	parse_map(char *argv, t_info *info);
void	read_file(char *argv, t_info *info);
void	put_image(int x, int y, char c, t_info *info);
void	draw_map(t_info *info);
void	put_xpm_image(int x, int y, const char *file, t_info *info);
void	ft_error(char *error);
void	ft_map_eror(t_info *info, int exit, int unknown);
void	check_chars(t_info *info);
void	choose_player_position(t_info *info);
void	check_walls(t_info *info);

int		key_hook(int keycode, t_info *info);
int		ft_exit(t_info *info);

#endif