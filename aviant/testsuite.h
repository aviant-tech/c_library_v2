/** @file
 *    @brief MAVLink comm protocol testsuite generated from aviant.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef AVIANT_TESTSUITE_H
#define AVIANT_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_development(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_AVSSUAS(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_aviant(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_development(system_id, component_id, last_msg);
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_AVSSUAS(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_aviant(system_id, component_id, last_msg);
}
#endif

#include "../development/testsuite.h"
#include "../common/testsuite.h"
#include "../AVSSUAS/testsuite.h"
#include "../ardupilotmega/testsuite.h"


static void mavlink_test_aviant_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_heartbeat_t packet_in = {
        5
    };
    mavlink_aviant_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_heartbeat_pack(system_id, component_id, &msg , packet1.state );
    mavlink_msg_aviant_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state );
    mavlink_msg_aviant_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_heartbeat_send(MAVLINK_COMM_1 , packet1.state );
    mavlink_msg_aviant_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_HEARTBEAT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_HEARTBEAT) != NULL);
#endif
}

static void mavlink_test_aviant_indicator_dummy(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_indicator_dummy_t packet_in = {
        17.0,{ 45.0, 46.0, 47.0, 48.0 },963498504,77,144,"ABCDEFG"
    };
    mavlink_aviant_indicator_dummy_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.float_value = packet_in.float_value;
        packet1.int32_value = packet_in.int32_value;
        packet1.state = packet_in.state;
        packet1.uint8_value = packet_in.uint8_value;
        
        mav_array_memcpy(packet1.float_array, packet_in.float_array, sizeof(float)*4);
        mav_array_memcpy(packet1.text_value, packet_in.text_value, sizeof(char)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_dummy_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_indicator_dummy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_dummy_pack(system_id, component_id, &msg , packet1.state , packet1.float_value , packet1.float_array , packet1.uint8_value , packet1.int32_value , packet1.text_value );
    mavlink_msg_aviant_indicator_dummy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_dummy_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state , packet1.float_value , packet1.float_array , packet1.uint8_value , packet1.int32_value , packet1.text_value );
    mavlink_msg_aviant_indicator_dummy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_indicator_dummy_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_dummy_send(MAVLINK_COMM_1 , packet1.state , packet1.float_value , packet1.float_array , packet1.uint8_value , packet1.int32_value , packet1.text_value );
    mavlink_msg_aviant_indicator_dummy_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_INDICATOR_DUMMY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY) != NULL);
#endif
}

static void mavlink_test_aviant_nav(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_NAV >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_nav_t packet_in = {
        5,72
    };
    mavlink_aviant_nav_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.accuracy = packet_in.accuracy;
        packet1.redundancy = packet_in.redundancy;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_nav_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_nav_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_nav_pack(system_id, component_id, &msg , packet1.accuracy , packet1.redundancy );
    mavlink_msg_aviant_nav_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_nav_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.accuracy , packet1.redundancy );
    mavlink_msg_aviant_nav_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_nav_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_nav_send(MAVLINK_COMM_1 , packet1.accuracy , packet1.redundancy );
    mavlink_msg_aviant_nav_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_NAV") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_NAV) != NULL);
#endif
}

static void mavlink_test_aviant_indicator_motors(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_indicator_motors_t packet_in = {
        { 17235, 17236, 17237, 17238, 17239, 17240, 17241, 17242, 17243, 17244, 17245, 17246 },18483,{ 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222 },247
    };
    mavlink_aviant_indicator_motors_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.anomalous_current_ca = packet_in.anomalous_current_ca;
        packet1.anomalous_current_status = packet_in.anomalous_current_status;
        
        mav_array_memcpy(packet1.mot_voltage_cv, packet_in.mot_voltage_cv, sizeof(int16_t)*12);
        mav_array_memcpy(packet1.mot_load_status, packet_in.mot_load_status, sizeof(uint8_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_motors_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_indicator_motors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_motors_pack(system_id, component_id, &msg , packet1.mot_voltage_cv , packet1.mot_load_status , packet1.anomalous_current_ca , packet1.anomalous_current_status );
    mavlink_msg_aviant_indicator_motors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_motors_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mot_voltage_cv , packet1.mot_load_status , packet1.anomalous_current_ca , packet1.anomalous_current_status );
    mavlink_msg_aviant_indicator_motors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_indicator_motors_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_motors_send(MAVLINK_COMM_1 , packet1.mot_voltage_cv , packet1.mot_load_status , packet1.anomalous_current_ca , packet1.anomalous_current_status );
    mavlink_msg_aviant_indicator_motors_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_INDICATOR_MOTORS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS) != NULL);
#endif
}

static void mavlink_test_aviant_indicator_fw_icing(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_INDICATOR_FW_ICING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_indicator_fw_icing_t packet_in = {
        5
    };
    mavlink_aviant_indicator_fw_icing_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_INDICATOR_FW_ICING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_INDICATOR_FW_ICING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_fw_icing_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_indicator_fw_icing_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_fw_icing_pack(system_id, component_id, &msg , packet1.state );
    mavlink_msg_aviant_indicator_fw_icing_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_fw_icing_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state );
    mavlink_msg_aviant_indicator_fw_icing_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_indicator_fw_icing_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_fw_icing_send(MAVLINK_COMM_1 , packet1.state );
    mavlink_msg_aviant_indicator_fw_icing_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_INDICATOR_FW_ICING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_INDICATOR_FW_ICING) != NULL);
#endif
}

static void mavlink_test_aviant_indicator_temp_logger(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_indicator_temp_logger_t packet_in = {
        5,72,139,206,17,84,151,218
    };
    mavlink_aviant_indicator_temp_logger_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pi_internal_state = packet_in.pi_internal_state;
        packet1.pi_internal = packet_in.pi_internal;
        packet1.cube_ambient_state = packet_in.cube_ambient_state;
        packet1.cube_ambient = packet_in.cube_ambient;
        packet1.fuselage_ambient_state = packet_in.fuselage_ambient_state;
        packet1.fuselage_ambient = packet_in.fuselage_ambient;
        packet1.outside_ambient_state = packet_in.outside_ambient_state;
        packet1.outside_ambient = packet_in.outside_ambient;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_logger_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_indicator_temp_logger_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_logger_pack(system_id, component_id, &msg , packet1.pi_internal_state , packet1.pi_internal , packet1.cube_ambient_state , packet1.cube_ambient , packet1.fuselage_ambient_state , packet1.fuselage_ambient , packet1.outside_ambient_state , packet1.outside_ambient );
    mavlink_msg_aviant_indicator_temp_logger_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_logger_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pi_internal_state , packet1.pi_internal , packet1.cube_ambient_state , packet1.cube_ambient , packet1.fuselage_ambient_state , packet1.fuselage_ambient , packet1.outside_ambient_state , packet1.outside_ambient );
    mavlink_msg_aviant_indicator_temp_logger_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_indicator_temp_logger_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_logger_send(MAVLINK_COMM_1 , packet1.pi_internal_state , packet1.pi_internal , packet1.cube_ambient_state , packet1.cube_ambient , packet1.fuselage_ambient_state , packet1.fuselage_ambient , packet1.outside_ambient_state , packet1.outside_ambient );
    mavlink_msg_aviant_indicator_temp_logger_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_INDICATOR_TEMP_LOGGER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER) != NULL);
#endif
}

static void mavlink_test_aviant_indicator_temp_fc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_aviant_indicator_temp_fc_t packet_in = {
        5,72,139,206,17,84,151,218
    };
    mavlink_aviant_indicator_temp_fc_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.battery_internal_state = packet_in.battery_internal_state;
        packet1.battery_internal = packet_in.battery_internal;
        packet1.airspeed_internal_state = packet_in.airspeed_internal_state;
        packet1.airspeed_internal = packet_in.airspeed_internal;
        packet1.accel_internal_state = packet_in.accel_internal_state;
        packet1.accel_internal = packet_in.accel_internal;
        packet1.baro_internal_state = packet_in.baro_internal_state;
        packet1.baro_internal = packet_in.baro_internal;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_fc_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_aviant_indicator_temp_fc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_fc_pack(system_id, component_id, &msg , packet1.battery_internal_state , packet1.battery_internal , packet1.airspeed_internal_state , packet1.airspeed_internal , packet1.accel_internal_state , packet1.accel_internal , packet1.baro_internal_state , packet1.baro_internal );
    mavlink_msg_aviant_indicator_temp_fc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_fc_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.battery_internal_state , packet1.battery_internal , packet1.airspeed_internal_state , packet1.airspeed_internal , packet1.accel_internal_state , packet1.accel_internal , packet1.baro_internal_state , packet1.baro_internal );
    mavlink_msg_aviant_indicator_temp_fc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_aviant_indicator_temp_fc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_aviant_indicator_temp_fc_send(MAVLINK_COMM_1 , packet1.battery_internal_state , packet1.battery_internal , packet1.airspeed_internal_state , packet1.airspeed_internal , packet1.accel_internal_state , packet1.accel_internal , packet1.baro_internal_state , packet1.baro_internal );
    mavlink_msg_aviant_indicator_temp_fc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("AVIANT_INDICATOR_TEMP_FC") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC) != NULL);
#endif
}

static void mavlink_test_aviant(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_aviant_heartbeat(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_dummy(system_id, component_id, last_msg);
    mavlink_test_aviant_nav(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_motors(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_fw_icing(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_temp_logger(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_temp_fc(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AVIANT_TESTSUITE_H
