/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:11:56 by hucherea          #+#    #+#             */
/*   Updated: 2024/12/11 15:01:13 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// INCLUDES

# include "history.h"
# include "libft.h"
# include "user_interface.h"

# include <stdio.h>
# include <stdlib.h>

// DEFINES

# define MSH_LOOP 1

// PROTOTYPES

int		exit_shell_routine(void);
char	*prompt_gets_user_input(void);

#endif
