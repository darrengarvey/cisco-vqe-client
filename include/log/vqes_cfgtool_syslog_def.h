/********************************************************************
 * !!!THIS FILE IS GENERATED BY MAKE SCRIPT, PLEASE DO NOT MODIFY!!!
 * Template of this file is tools/config_tool/syslog_defs
 *
 * vqes_cfgtool_syslog_def.h
 *
 * This file defines the SYSLOG messages for
 * VQE configuration tool.
 *
 * Copyright (c) 2008-2012 by Cisco Systems, Inc.
 * All rights reserved.
 *
 *********************************************************************/

#ifndef _VQE_CFGTOOL_SYSLOG_DEF_H_
#define _VQE_CFGTOOL_SYSLOG_DEF_H_

#include <log/syslog_macros.h>
#include <log/vqe_id.h>

syslog_facilitydef(VQENAME_VQE_CFGTOOL, LOG_VQE_CFGTOOL, LOG_ERR);

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_UNDEFINED_INTF_IN_LISTING, LOG_ERR,
              "Eth%s is not defined, however it is assigned an interface role (%s).");
msgdef_explanation("Undefined interfaces must not appear in any role");
msgdef_recommended_action("Remove this interface from the aforementioned role.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDB_SAMPLE_ERR, LOG_ERR,
              "VCDB syntax file /etc/opt/vqes/.vcdb.conf.sample is either corrupted, missing or does not have correct checksum file. Aborting.");
msgdef_explanation("VCDB syntax file is unusable, configuration tool will not proceed.");
msgdef_recommended_action("/etc/opt/vqes/.vcdb.conf.sample must be fixed before configuration tool can be used.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_INCLUDES_AN_INTF_WITH_ADDR, LOG_ERR,
              "Bond%s contains %s as a member, however this interface has a set address -- %s.");
msgdef_explanation("All interfaces that are members of a bond must have null IP/mask settings");
msgdef_recommended_action("Remove this interface from the aforementioned bond, or delete its IP/mask settings.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_UNDEFINED_INTERFACE, LOG_CRIT,
              "vqe.vqes.vqe_interfaces or vqe.vqes.vqe_ingest_interfaces or vqe.vqes.vqe_service_interfaces are set as an undef values.");
msgdef_explanation("This is likely due to a coding error, not a user error. Note that a null value would have been valid, but an undef is not.");
msgdef_recommended_action("Check if the configuration tool scripts have been damaged or tampered with. Re-install software if needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_NO_ADDR, LOG_ERR,
              "Bond%s has no IP/mask settings. Every set bond must have an address.");
msgdef_explanation("Bond has a value in network.bond%s.members but not in network.bond%s.addr.");
msgdef_recommended_action("Set a valid IP/mask for this bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_PARSING_FAILED, LOG_ERR,
              "Invalid syntax or value detected in vcdb.conf file. Please correct above problems in vcdb.conf file and retry. Aborting.");
msgdef_explanation("There is invalid key, value or syntax in vcdb.conf.");
msgdef_recommended_action("Need to fix the error then run the tool again.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_INVALID_BOND_MEMBER, LOG_ERR,
              "network.bond%s.members contains an interface member (%s) that does not conform to the interface naming format or is out-of-range.");
msgdef_explanation("All members of a bond must have the form- eth#, where # is an integer between 1 and %s (inclusive).");
msgdef_recommended_action("Remove or correct the invalid member name.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_INVALID_ADDR, LOG_ERR,
              "Bond%s has an invalid IP/mask format or is out-of-range. The IP/mask must be of the form: "x.x.x.x/x".");
msgdef_explanation("Bond IP/mask in network.bond%s.addr does not have the proper format or has a value that is out of range.");
msgdef_recommended_action("Correct the IP/mask for this bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_INTERFACE_DUPLICATE_ADDR, LOG_ERR,
              "Eth%s and Eth%s have identical IP/mask settings. Two different interfaces cannot have the same IP/mask.");
msgdef_explanation("IP/masks in network.eth1.addr, network.eth2.addr, network.eth3.addr, etc. must be unique.");
msgdef_recommended_action("Correct the IP/mask of an interface, or unite them into a single bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_NONEXISTENT_SUBINTF_IN_LISTING, LOG_ERR,
              "Sub-interfaces (%s) are not defined, however they are assigned an interface role (%s).");
msgdef_explanation("Undefined sub-interfaces must not appear in any role");
msgdef_recommended_action("Remove these sub-interfaces from the aforementioned role.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_IGNORE_FILE, LOG_ERR,
              "CE - File (%s) has multiple definitions for this single-valued key (%s). This file is being skipped.");
msgdef_explanation("All key value pairs belong to this file are ignored by Configuration Engine.");
msgdef_recommended_action("User needs to manually fix this file and leave only one definition for this key.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_DUPLICATE_KEY, LOG_ERR,
              "VCDB Parser - Multiple values are configured for the single-value key -- %s in line %s.");
msgdef_explanation("Only one value should be configured for this parameter.");
msgdef_recommended_action("Need to remove extra configurations.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_UNDEFINED_BOND_IN_LISTING, LOG_ERR,
              "Bond%s is not defined, however it is assigned an interface role (%s).");
msgdef_explanation("Undefined bonds must not appear in any role");
msgdef_recommended_action("Remove this bond from the aforementioned role.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_EFACTOR_RANGE, LOG_ERR,
              "Value of vqe.vqes.min_client_excess_bw_fraction cannot be greater than value of vqe.vqes.max_client_excess_bw_fraction.");
msgdef_explanation("Value of vqe.vqes.min_client_excess_bw_fraction cannot be greater than value of vqe.vqes.max_client_excess_bw_fraction.");
msgdef_recommended_action("Set correct value for vqe.vqes.min_client_excess_bw_fraction and vqe.vqes.max_client_excess_bw_fraction in vcdb.conf.");

syslog_msgdef(LOG_VQE_CFGTOOL, CFG_ARGS_ERR, LOG_ERR,
              "CFGTOOL - unrecognized command argument: %s.");
msgdef_explanation("vqe_cfgtool aborted on above unrecognized argument.");
msgdef_recommended_action("Fix the command line argument.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_ER_PKT_TB_RATE_OBSOLETE, LOG_WARNING,
              "Parameter vqe.vqes.er_pkt_tb_rate_key in line %s is obsoleted. Its value in vcdb.conf will be ignored.");
msgdef_explanation("Parameter vqe.vqes.er_pkt_tb_rate_key is obsoleted. Use instead the new parameter vqe.vqes.reserved_er_bw");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_NET_RESTART, LOG_INFO,
              "CE - Restarting network interfaces to apply configuration changes.");
msgdef_explanation("This message indicates that network restart is going to be performed.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_REBOOT, LOG_INFO,
              "CE - Rebooting system to apply configuration changes.");
msgdef_explanation("This message indicates that a system reboot is going to be performed.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_INVALID_MGMT_ROUTE, LOG_WARNING,
              "The management route specified(%s) is not included in OSPF routing map.");
msgdef_explanation("OSPF routing map does not accept management route that has prefix of 0.");
msgdef_recommended_action("Information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VQEPARSER_LEAD_TRAIL_SPACE, LOG_WARNING,
              "VCDB Parser - There are spaces around value inside double quotes in line %s (%s). Spaces are being ignored.");
msgdef_explanation("This is a warning message to user, these spaces are being ignored.");
msgdef_recommended_action("User may want to fix the value.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_VQES_CFGUPDATE, LOG_INFO,
              "CE - Updating config file %s.");
msgdef_explanation("Config tool is updating the indicated /etc/ configuration file.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, GENERAL_DEBUG_MSG, LOG_DEBUG,
              "cfgtool - %s");
msgdef_explanation("Message for debug/trace purpose.");
msgdef_recommended_action("Information only. No action is needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_RTP_DSCP_DEPRECATE, LOG_WARNING,
              "Parameter vqe.vqes.rtp_retrans_dscp in line %s is deprecated. Its name in vcdb.conf will be converted to vqe.vqes.rtp_er_dscp when you run "vqe_cfgtool -config", and choose save option. This parameter can also be manually modified in vcdb.conf.");
msgdef_explanation("Parameter vqe.vqes.rtp_retrans_dscp is deprecated. Use the new parameter vqe.vqes.rtp_er_dscp");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_OVERLAP_INTERFACE, LOG_ERR,
              "Some of the interfaces and bonds assigned for ingest are also assigned to the service role (overlap group = %s).");
msgdef_explanation("The ingest interfaces and bonds (listed in vqe.vqes.vqe_ingest_interfaces) must not overlap with the service interfaces and bonds (listed in vqe.vqes.vqe_service_interfaces).");
msgdef_recommended_action("Remove overlapping interfaces and bonds from vqe.vqes.vqe_ingest_interfaces or vqe.vqes.vqe_service_interfaces list.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_SKIP_FILE_IGNORE, LOG_WARN,
              "CE - File %s is skipped by CMS due to $$IGNORE configuration.");
msgdef_explanation("This message indicates at least one parameter in this /etc/ file is configured to be ignored. And CMS will not process it.");
msgdef_recommended_action("Information only, no action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_APPLY_KVPAIR, LOG_DEBUG,
              "CE - Processing key value pair: %s :: %s.");
msgdef_explanation(".");
msgdef_recommended_action(".");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_MGMT_ROUTE_DEPRECATE, LOG_WARNING,
              "Parameter network.route.mgmt_route in line %s is deprecated. Its name in vcdb.conf will be converted to network.route.static_route when you run "vqe_cfgtool -config", and choose save option. This parameter can also be manually modified in vcdb.conf.");
msgdef_explanation("Parameter network.route.mgmt_route is deprecated. Use the new parameter network.route.static_route");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_DUPLICATE_VALUE, LOG_ERR,
              "VCDB Parser - Duplicate values are configured for the same key -- %s in line %s.");
msgdef_explanation("Values need to be different for a multi-value parameter.");
msgdef_recommended_action("Need to remove extra configurations.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_NO_MEMBERS, LOG_ERR,
              "Bond%s has no members. Every set bond must have at least one interface member.");
msgdef_explanation("Bond has a value in network.bond%s.addr but not in network.bond%s.members.");
msgdef_recommended_action("Set a valid IP/mask for this bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_SKIP_FILE, LOG_WARN,
              "CE - File %s is skipped by CMS due to checksum mismatch.");
msgdef_explanation("This message indicates there is a checksum mismatch in /etc/ file. And CMS will not process it.");
msgdef_recommended_action("Operator should investigate the file and make sure all changes are expected.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_DEFAULT_GATEWAY_DEPRECATE, LOG_WARNING,
              "Parameter network.route.default_gateway in line %s is deprecated. Its name (and contents) in vcdb.conf will be converted to network.route.static_route when you run "vqe_cfgtool -config", and choose save option. This parameter can also be manually modified in vcdb.conf.");
msgdef_explanation("Parameter network.route.default_gateway is deprecated. Use the new parameter network.route.static_route");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_OVERLAP, LOG_ERR,
              "Bond%s and Bond%s have overlapping interface members (overlap group = %s).");
msgdef_explanation("No interface may appear in both bond membership lists (network.bond%s.members and network.bond%s.members).");
msgdef_recommended_action("Remove each of the overlapping interfaces from one (or both) bond membership lists.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_IPTABLES_RELOAD, LOG_INFO,
              "CE - Reloading iptables filter rules.");
msgdef_explanation("This message indicates that iptables service will reload filter rules.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_TRUSTHOST_DEPRECATE, LOG_WARNING,
              "Parameter vqe.iptables.trusted_vcpt in line %s is deprecated. Its name in vcdb.conf will be converted to system.iptables.trusted_provisioner when you run "vqe_cfgtool -config", and choose save option. This parameter can also be manually modified in vcdb.conf.");
msgdef_explanation("Parameter vqe.iptables.trusted_vcpt is deprecated. Use the new parameter system.iptables.trusted_provisioner");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_MAX_RAI_GAP_OBSOLETE, LOG_WARNING,
              "Parameter vqe.vqes.max_rai_gap in line %s is obsoleted. Its value in vcdb.conf will be ignored.");
msgdef_explanation("Parameter vqe.vqes.max_rai_gap is obsoleted. There is no replacement parameter");
msgdef_recommended_action("Stop using the old parameter.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_VQES_RESTART, LOG_INFO,
              "CE - Restarting VQES services to apply configuration changes.");
msgdef_explanation("This message indicates that VQES service restart is going to be performed.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDB_BLANK_VALUE, LOG_ERR,
              "Blank value is detected for a key (%s) in line %s of vcdb.conf, configuration tool can not proceed.");
msgdef_explanation("Blank value is not allowed in vcdb.conf, CMS will assume it is an error and abort execution.");
msgdef_recommended_action("Correct the line with blank value in vcdb.conf, or comment it out.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_SYSLOG_SNMPSA_RESTART, LOG_INFO,
              "CE - Restarting syslog_snmpsa service to apply configuration changes.");
msgdef_explanation("This message indicates that syslog_snmpsa service is going to be restarted.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_ROLE_MULTIPLE_SUBINTF, LOG_ERR,
              "Multiple subinterfaces of a single interface are assigned to same role (%s).");
msgdef_explanation("No role may contain multiple subinterfaces of the same interface.");
msgdef_recommended_action("Remove multiple subinterfaces from the role lists.");

syslog_msgdef(LOG_VQE_CFGTOOL, CT_CHANGE_LOG_PRIORITY, LOG_INFO,
              "CE - Changing log priority to %s.");
msgdef_explanation("This message indicates log priority level is changed.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_NEED_ONE_INTERFACE, LOG_ERR,
              "Once at least one dedicated VQE-S Ingest Interfaces is configured, you must also configure at least one VQE-S Service Interface, and vice versa.  Both interface lists (vqe.vqes.vqe_service_interfaces and vqe.vqes.vqe_ingest_interfaces) must be non-empty if either is non-empty.");
msgdef_explanation("There has to be at least one interface in vqe.vqes.vqe_ingest_interfaces and at least one interface in vqe.vqes.vqe_service_interfaces, if either one is non-empty");
msgdef_recommended_action("Configure at least one interface for vqe.vqes.vqe_ingest_interfaces and at least one interface for vqe.vqes.vqe_service_interfaces list.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_DUPLICATE_ADDR, LOG_ERR,
              "Bond%s and Bond%s have identical IP/mask settings. Two different bonds cannot have the same IP/mask.");
msgdef_explanation("Bond IP/masks in network.bond1.addr, network.bond2.addr, and network.bond3.addr must be unique.");
msgdef_recommended_action("Unite the bonds so that no two have the same IP/mask.");

syslog_msgdef(LOG_VQE_CFGTOOL, BACKSPACE, LOG_WARNING,
              "VCDB Parser -- Invalid control character detected, possible backspace issue.");
msgdef_explanation("some terminal emulator send non-standard control character for backspace, which will be ignored by the config tool.");
msgdef_recommended_action("check the terminal configuration to find the correct key stroke for backspace, or avoid it during input.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_TARGET_ERR, LOG_ERR,
              "CE - target directory (%s) does not exist.");
msgdef_explanation("config engine aborted because specified target directory does not exist.");
msgdef_recommended_action("Fix vqe_ce command line argument.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_IGNORE_KVPAIR, LOG_WARNING,
              "CE - Ignoring key: %s.");
msgdef_explanation("This key value pair is being ignored by Configuration Engine.");
msgdef_recommended_action("This key does not take effective. Information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_TOOL_PLATFORM_HAS_BOND, LOG_ERR,
              "Attempting to run the VQE Tool platform with a bond setting -- %s");
msgdef_explanation("The VQE Tool platform must not have any bonds configured. Bonds can only be set in the VQE-S platform.");
msgdef_recommended_action("Remove all bond settings (network.bondX.members or network.bondX.addr, where X is an integer).");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_NO_QUOTE, LOG_ERR,
              "VCDB Parser - Invalid syntax (missing double quotes around value) in line %s: %s.");
msgdef_explanation("Invalid syntax -- Value of a key needs to be in double quote");
msgdef_recommended_action("Need to fix the syntax error.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_ROUTERID_DUP, LOG_WARNING,
              "Router ID has the same value as one of the interface IP address.");
msgdef_explanation("The Router ID matches an interface IP address, which may cause OSPF issues in certain configurations (such as NSSA).");
msgdef_recommended_action("The Router ID should be changed to a unique IP address.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_UNKNOWN_KEY, LOG_ERR,
              "VCDB Parser - Unrecognized key in line %s: %s.");
msgdef_explanation("Unknown key detected in the VCDB file.");
msgdef_recommended_action("Unknown key needs to be removed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_INTERFACE_ALSO_SUBINTERFACED, LOG_ERR,
              "Bond%s contains member interfaces (%s) that also has subinterfaces defined for it.");
msgdef_explanation("A physical interface can either be a bond member or have subinterfaces, but not both.");
msgdef_recommended_action("Remove the subinterfaces associated with this interface, or remove it from the bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_INTF_DUPLICATE_ADDR, LOG_ERR,
              "Bond%s and Eth%s have identical IP/mask settings. A bond and an interface cannot have the same IP/mask.");
msgdef_explanation("Every bond IP/masks in network.bondX.addr must be different from every interface IP/mask in network.ethY.addr. Where X,Y are two integers");
msgdef_recommended_action("Add the interface as a member of the bond, or change the IP/mask of the interface or of the bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_NTPD_RESTART, LOG_INFO,
              "CE - Reloading NTP service.");
msgdef_explanation("This message indicates that NTP service will restart.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_NO_ROUTERID, LOG_ERR,
              "Router ID needs to be configured when routing type is set to ospf.");
msgdef_explanation("Router ID is a required parameter for OSPF to run properly.");
msgdef_recommended_action("Set network.ospf.router_id parameter in vcdb.conf via editor or Config Tool UI.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_SNMP_RESTART, LOG_INFO,
              "CE - Restarting snmpd service to apply configuration changes.");
msgdef_explanation("This message indicates that snmpd service is going to be restarted.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_EXCLUSIVE_INTERFACE, LOG_ERR,
              "vqe.vqes.vqe_interfaces cannot be used when vqe.vqes.vqe_ingest_interfaces and/or vqe.vqes.vqe_service_interfaces are used, and vice versa.  The first list is mutually exclusive with the second two lists.");
msgdef_explanation("You can choose to use vqe.vqes.vqe_interfaces or vqe.vqes.vqe_ingest_interfaces/vqe.vqes.vqe_service_interfaces. They cannot be configured at the same time.");
msgdef_recommended_action("Remove vqe.vqes.vqe_interfaces or remove both vqe.vqes.vqe_ingest_interfaces and vqe.vqes.vqe_service_interfaces.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_INVALID_MAC_ADDR, LOG_ERR,
              "Interface configuration file (%s) contains an invalid MAC address setting (%s).");
msgdef_explanation("All MAC addresses must conform to the format- xx:xx:xx:xx:xx:xx , where x is a hexadecimal digit.");
msgdef_recommended_action("Correct the MAC address format in this file. You may need to reboot the system.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_INVALID_VALUE, LOG_WARNING,
              "CE - Ignoring invalid value: %s :: %s.");
msgdef_explanation("This invalid value is being ignored by Configuration Engine.");
msgdef_recommended_action("This value is either out of range or invalid type. Need correct value.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BOND_INTERFACE_ALSO_INDEPENDENT, LOG_ERR,
              "Bond%s contains member interfaces (%s) that also, independently, have been assigned an interface role (%s). Note that if the role membership was not set, then it now contains its default members.");
msgdef_explanation("A physical interface can either be a bond member or assigned an interface role, but not both.");
msgdef_recommended_action("Remove this interface from the aforementioned role listing, or remove it from the bond.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BAD_VALUE, LOG_ERR,
              "VCDB Parser - Attempting to set an out-of-range or bad format value (%s) into key (%s) in line %s.");
msgdef_explanation("A key is being set to an invalid value. This key will remain unset or will be set to a default value.");
msgdef_recommended_action("User needs to correct the bad value configuration in vcdb.conf.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_VQES_SNMPSA_RESTART, LOG_INFO,
              "CE - Restarting vqes_snmpsa service to apply configuration changes.");
msgdef_explanation("This message indicates that vqes_snmpsa service is going to be restarted.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDB_MISSING_HW_INFO, LOG_WARNING,
              "Problem detected while retrieving platform information -- %s");
msgdef_explanation("There might be some hardware problem or system corruption.");
msgdef_recommended_action("Check installation logs and vqe.log. Re-install software if needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_APPLY_IF, LOG_DEBUG,
              "CE - Apply value of %s to interface key %s.");
msgdef_explanation("This is debug message.");
msgdef_recommended_action("No action is needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_SYSLOGNG_RESTART, LOG_INFO,
              "CE - Restarting syslog-ng service to apply configuration changes.");
msgdef_explanation("This message indicates that syslog-ng service is going to be restarted.");
msgdef_recommended_action("This is information only. No action needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDB_UNKNOWN_HW, LOG_ERR,
              "Can not determine the hardware platform type.");
msgdef_explanation("There might be some hardware problem or system corruption.");
msgdef_recommended_action("Check installation logs and vqe.log. Re-install software if needed.");

syslog_msgdef(LOG_VQE_CFGTOOL, CE_CHECKSUM_MISMATCH, LOG_WARN,
              "CE - Checksum mismatch detected for file %s.");
msgdef_explanation("This message indicates there is a checksum mismatch in /etc/ files.");
msgdef_recommended_action("Operator should investigate the file and make sure all changes are expected.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_BAD_SYNTAX, LOG_ERR,
              "VCDB Parser - Invalid syntax in line %s: %s.");
msgdef_explanation("Invalid syntax delected in this line of the VCDB file.");
msgdef_recommended_action("Need to fix the syntax error.");

syslog_msgdef(LOG_VQE_CFGTOOL, VCDBPARSER_RESERVED_CORE_ER_BW_OBSOLETE, LOG_WARNING,
              "Parameter vqe.vqes.reserved_core_er_bw in line %s is obsoleted. Its value in vcdb.conf will be ignored. Please use vqe.vqes.reserved_er_bw parameter instead if needed.");
msgdef_explanation("Parameter vqe.vqes.reserved_core_er_bw is obsoleted. Use instead the new parameter vqe.vqes.reserved_er_bw");
msgdef_recommended_action("Stop using the old parameter.");



#endif /* _VQE_CFGTOOL_SYSLOG_DEF_H_ */
