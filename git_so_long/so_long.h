/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwesche <nwesche@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:57:22 by nwesche           #+#    #+#             */
/*   Updated: 2022/05/23 17:58:49 by nwesche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "./mlx_linux/mlx.h"
# include "./gnl/get_next_line.h"
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_program
{
	void	*mlx;
	void	*win;
	char	*gnl;
	void	*character;
	int				check;
	int				character_pos_x;
	int				character_pos_y;
	int				map_h;
	int				map_w;
	int				print_x;
	void	*space;
	int				print_y;
	int				check_steps;
	int				move;
	int				empty_pos_x;
	int				empty_pos_y;
	void	*exit;
	void	*coin;
	void	*wall;
	int				finish;
	int				count_coin;
	int				ch1;
	int				steps;
	
}				t_program;

typedef struct s_map
{
	int		wall_l;
	int		wall_h;
	int		character_l;
	int		character_h;
	int		space_l;
	int		space_h;
	int		enemy_l;
	int		enemy_h;
	int		exit_l;
	int		exit_h;
	int		coin_l;
	int		coin_h;
}				t_map;

int		ft_close(t_program *pro);
int		ft_pressbutton(int keycode, t_program *pro);
void	character_start(t_program *pro);
void	move(t_program *program, int keycode);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_error_image(t_program *pro);
void	ft_error_map(t_program *pro);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
void	ft_exit(t_program *pro);
void	init_img(t_program *program, t_map *map);
void	printmap(t_program *program, char type);
void	read_line(t_program *program);
void	read_map(t_program *program, char *argv);
void	check_map_forbidden_chars(t_program *pro, char *map);
void	get_map(t_program *program);
void	check_map(t_program *pro, char *map);
void	check_map_wall(t_program *pro, char *map);
void	check_map_wall2(t_program *pro, char *map);
void	check_map_wall3(t_program *pro, char *map, int l);
void	check_map_rect_error(t_program *pro);
void	check_map_rect2(t_program *pro, char *map);
void	check_map_rect(t_program *pro, char *map);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	read_map_helper(int fd, int *i, t_program *program);

#endif