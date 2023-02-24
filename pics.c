/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:40:36 by digil-pa          #+#    #+#             */
/*   Updated: 2023/02/09 13:40:56 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
#include "so_long.h"

int main()
{
    void    *mlx_pointer = mlx_init();
    mlx_loop(mlx_pointer);
}