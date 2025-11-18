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

static void mavlink_test_aviant(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_aviant_heartbeat(system_id, component_id, last_msg);
    mavlink_test_aviant_indicator_dummy(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // AVIANT_TESTSUITE_H
