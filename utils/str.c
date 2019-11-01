/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:09:03 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/31 10:44:10 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int
	str_length(t_str *str)
{
	int	i;

	i = 0;
	while (str)
	{
		str = str->next;
		i++;
	}
	return (i);
}

t_str
	*str_add_back(t_str **str, char const *content)
{
	t_str	*first;
	t_str	*new;

	if (!(new = (t_str*)malloc(sizeof(*new))))
		return (0);
	new->content = NULL;
	new->next = NULL;
	if (!*str)
		*str = new;
	else
	{
		first = *str;
		while ((*str)->next)
			*str = (*str)->next;
		(*str)->next = new;
		*str = first;
	}
	if (!(new->content = ft_strdup(content)))
		return (NULL);
	return (new);
}

t_str
	*str_last(t_str *str)
{
	if (!str)
		return (NULL);
	while (str->next)
		str = str->next;
	return (str);
}

int
	str_clear(t_str **list)
{
	t_str	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->content);
		free(*list);
		(*list) = tmp;
	}
	*list = NULL;
	return (0);
}