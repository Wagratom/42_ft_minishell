/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:28:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/11 21:14:04 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

t_parse	*new_heredoc(char *delimiter)
{
	t_parse	*new;

	new = new_parse();
	new->type = PT_HEREDOC;
	new->delimiter = ft_strdup_null(delimiter);
	return (new);
}

void	add_heredoc(t_parse_list **list, char *delimiter)
{
	t_parse	*_parse;

	_parse = new_heredoc(delimiter);
	ft_dlst_add(list, _parse);
}
