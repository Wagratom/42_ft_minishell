/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/05 16:25:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <libft.h>
# include <stdint.h>

/******************************************************************************\
 * HASH TABLE
\******************************************************************************/

typedef struct s_hash_table
{
	t_dlist			**index_lists;
	int				size;
	int				count;
}					t_hash_table;

typedef struct s_ht_item
{
	char			*key;
	char			*value;
}					t_ht_item;

/******************************************************************************\
 * CONTROL
\******************************************************************************/

typedef struct s_minishell
{
	bool			debug;

	int				argc;
	char			**argv;
	char			**envp;

	t_hash_table	*envht;

	t_list			*lalloc;
}					t_minishell;

/******************************************************************************\
 * LEXER
\******************************************************************************/

typedef enum e_lexed_variable
{
	KEY = 0,
	VALUE = 1,
}					t_lexed_variable;

/******************************************************************************\
 * CRYPTO
\******************************************************************************/

typedef struct s_md5
{
	void			*message;
	size_t			msg_length;

	uint32_t		chunks;
	uint8_t			*padded_message;

	uint32_t		*digest;
}					t_md5;

typedef enum e_chuck_digest_ints
{
	_A = 0,
	_B = 1,
	_C = 2,
	_D = 3,
}					t_chuck_digest_ints;

#endif
