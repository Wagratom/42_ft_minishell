/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_fork.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:51:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/17 11:13:15 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

void	set_interrupt_fork_signal_hook(void)
{
	set_signal_hook(signal_action(), handle_fork_interrupt_signal, SIGINT);
}

void	set_quit_fork_signal_hook(void)
{
	set_signal_hook(signal_action(), handle_fork_quit, SIGQUIT);
}

void	set_fork_hooks(void)
{
	set_interrupt_fork_signal_hook();
	set_quit_fork_signal_hook();
}
