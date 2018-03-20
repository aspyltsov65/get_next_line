/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyltsov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 20:13:48 by apyltsov          #+#    #+#             */
/*   Updated: 2018/01/31 20:13:50 by apyltsov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
int main(int argc, char **argv)
{
    int     i;
    int     j;
    int     k;
    int     m;
    char    *line;
    line = (char*)ft_memalloc(1);
    //file = open(argv[1], O_RDONLY);
    j = open(argv[1], O_RDONLY);
    k = open(argv[2], O_RDONLY);
    i = 0;
    m = 0;
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD1 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD2 %d |%s|\n", i, line);
    i = get_next_line(j, &line);
        printf("FD2 %d |%s|\n", i, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
    // m = get_next_line(k, &line);
    //  printf("FD2 %d |%s|\n", m, line);
        system ("leaks a.out");
        sleep(30);
    // printf("num1 - %d\n", i);
    // printf("line1 - |%s|\n", line);
    // printf("num2 - %d\n", i);
    // printf("line2 - |%s|\n", line);
    // printf("num3 - %d\n", i);
    // printf("line3 - |%s|\n", line);
    return (0);
}