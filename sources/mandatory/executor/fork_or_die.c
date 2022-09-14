/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:29:53 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/12 21:39:42 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

pid_t	fork_or_die(void)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
		die(FORK_ERR);
	return (pid);
}
