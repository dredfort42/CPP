/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dredfort <dredfort@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:50:49 by dredfort          #+#    #+#             */
/*   Updated: 2022/03/06 14:25:41 by dredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public: 

    int     index;

    Contact();
    ~Contact();
 
    void    newContact(int cid);
    void    displayContact();
    void    displayDetailed();

private:
    
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    void    alignAndTruncat(std::string text) const;
    
};

#endif