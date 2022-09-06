/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/09/06 15:28:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

/******************************************************************************\
 * CONTROL
\******************************************************************************/

# define DEFAULT_LAST_EXIT 0

/******************************************************************************\
 * LEXER
\******************************************************************************/

# define DELIMITER -42

# define NULL_CHAR '\0'
# define EQUALS '='
# define SPACE ' '
# define DOLLAR '$'

# define SINGLE_QUOTE '\''
# define DOUBLE_QUOTE '\"'

# define VERTICAL_BAR '|'

# define GREATER_THAN '>'
# define TRUNCATE ">"
# define APPEND ">>"

# define LESS_THAN '<'
# define READ_FILE "<"
# define HEREDOC "<<"

# define TOKENS_DEBUG_MESSAGE "Lexed string \"%s\" into tokens:"

/******************************************************************************\
 * CRYPTO
\******************************************************************************/

# define ONE_BIT 0b10000000
# define NULL_BYTE 0b00000000

# define MD5_DIGEST_SIZE 16
# define MD5_HASH_SIZE 33

/******************************************************************************\
 * HASH TABLE
\******************************************************************************/

# define HASH_TABLE_SIZE 10000
# define HT_BAD_INDEX -1

/******************************************************************************\
 * RUNTIME
\******************************************************************************/

# define PRINT_ERROR_PREFIX "ERROR:\t"
# define PRINT_WARNING_PREFIX "WRNNG:\t"

#endif
