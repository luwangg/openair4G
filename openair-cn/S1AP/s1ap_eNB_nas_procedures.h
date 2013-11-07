/*******************************************************************************

  Eurecom OpenAirInterface
  Copyright(c) 1999 - 2013 Eurecom

  This program is free software; you can redistribute it and/or modify it
  under the terms and conditions of the GNU General Public License,
  version 2, as published by the Free Software Foundation.

  This program is distributed in the hope it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.

  The full GNU General Public License is included in this distribution in
  the file called "COPYING".

  Contact Information
  Openair Admin: openair_admin@eurecom.fr
  Openair Tech : openair_tech@eurecom.fr
  Forums       : http://forums.eurecom.fr/openairinterface
  Address      : EURECOM, Campus SophiaTech, 450 Route des Chappes
                 06410 Biot FRANCE

*******************************************************************************/

#ifndef S1AP_ENB_NAS_PROCEDURES_H_
#define S1AP_ENB_NAS_PROCEDURES_H_

int s1ap_eNB_handle_nas_downlink(uint32_t               assoc_id,
                                 uint32_t               stream,
                                 struct s1ap_message_s *message_p);

// int s1ap_eNB_initial_ctxt_resp(eNB_mme_desc_t                 *eNB_desc_p,
//                                s1ap_initial_ctxt_setup_resp_t *initial_ctxt_resp_p);

#endif /* S1AP_ENB_NAS_PROCEDURES_H_ */
