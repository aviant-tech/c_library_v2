#pragma once
// MESSAGE AVIANT_ATS_STATUS PACKING

#define MAVLINK_MSG_ID_AVIANT_ATS_STATUS 59026


typedef struct __mavlink_aviant_ats_status_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 uint32_t ats_status_flags; /*<  ATS Status flags*/
 float main_voltage1; /*< [V] Main voltage measurement 1*/
 float main_voltage2; /*< [V] Main voltage measurement 2*/
 float ups_voltage; /*< [V] UPS voltage measurement*/
 uint8_t fc_armed; /*<  Is the flight controller armed?*/
 uint8_t fc_flight_termination; /*<  Is the flight controller in flight termination?*/
 uint8_t power_loss_trigger_enabled; /*<  Power loss trigger enabled*/
 uint8_t ats_enabled; /*<  ATS enabled*/
} mavlink_aviant_ats_status_t;

#define MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN 24
#define MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN 24
#define MAVLINK_MSG_ID_59026_LEN 24
#define MAVLINK_MSG_ID_59026_MIN_LEN 24

#define MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC 252
#define MAVLINK_MSG_ID_59026_CRC 252



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_ATS_STATUS { \
    59026, \
    "AVIANT_ATS_STATUS", \
    9, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_ats_status_t, time_boot_ms) }, \
         { "fc_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_aviant_ats_status_t, fc_armed) }, \
         { "fc_flight_termination", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_aviant_ats_status_t, fc_flight_termination) }, \
         { "ats_status_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_aviant_ats_status_t, ats_status_flags) }, \
         { "power_loss_trigger_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_aviant_ats_status_t, power_loss_trigger_enabled) }, \
         { "ats_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_aviant_ats_status_t, ats_enabled) }, \
         { "main_voltage1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aviant_ats_status_t, main_voltage1) }, \
         { "main_voltage2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aviant_ats_status_t, main_voltage2) }, \
         { "ups_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aviant_ats_status_t, ups_voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_ATS_STATUS { \
    "AVIANT_ATS_STATUS", \
    9, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_ats_status_t, time_boot_ms) }, \
         { "fc_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_aviant_ats_status_t, fc_armed) }, \
         { "fc_flight_termination", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_aviant_ats_status_t, fc_flight_termination) }, \
         { "ats_status_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_aviant_ats_status_t, ats_status_flags) }, \
         { "power_loss_trigger_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_aviant_ats_status_t, power_loss_trigger_enabled) }, \
         { "ats_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_aviant_ats_status_t, ats_enabled) }, \
         { "main_voltage1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aviant_ats_status_t, main_voltage1) }, \
         { "main_voltage2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aviant_ats_status_t, main_voltage2) }, \
         { "ups_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aviant_ats_status_t, ups_voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_ats_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param fc_armed  Is the flight controller armed?
 * @param fc_flight_termination  Is the flight controller in flight termination?
 * @param ats_status_flags  ATS Status flags
 * @param power_loss_trigger_enabled  Power loss trigger enabled
 * @param ats_enabled  ATS enabled
 * @param main_voltage1 [V] Main voltage measurement 1
 * @param main_voltage2 [V] Main voltage measurement 2
 * @param ups_voltage [V] UPS voltage measurement
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_ats_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t fc_armed, uint8_t fc_flight_termination, uint32_t ats_status_flags, uint8_t power_loss_trigger_enabled, uint8_t ats_enabled, float main_voltage1, float main_voltage2, float ups_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, ats_status_flags);
    _mav_put_float(buf, 8, main_voltage1);
    _mav_put_float(buf, 12, main_voltage2);
    _mav_put_float(buf, 16, ups_voltage);
    _mav_put_uint8_t(buf, 20, fc_armed);
    _mav_put_uint8_t(buf, 21, fc_flight_termination);
    _mav_put_uint8_t(buf, 22, power_loss_trigger_enabled);
    _mav_put_uint8_t(buf, 23, ats_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#else
    mavlink_aviant_ats_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ats_status_flags = ats_status_flags;
    packet.main_voltage1 = main_voltage1;
    packet.main_voltage2 = main_voltage2;
    packet.ups_voltage = ups_voltage;
    packet.fc_armed = fc_armed;
    packet.fc_flight_termination = fc_flight_termination;
    packet.power_loss_trigger_enabled = power_loss_trigger_enabled;
    packet.ats_enabled = ats_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_ATS_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
}

/**
 * @brief Pack a aviant_ats_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param fc_armed  Is the flight controller armed?
 * @param fc_flight_termination  Is the flight controller in flight termination?
 * @param ats_status_flags  ATS Status flags
 * @param power_loss_trigger_enabled  Power loss trigger enabled
 * @param ats_enabled  ATS enabled
 * @param main_voltage1 [V] Main voltage measurement 1
 * @param main_voltage2 [V] Main voltage measurement 2
 * @param ups_voltage [V] UPS voltage measurement
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_ats_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t fc_armed, uint8_t fc_flight_termination, uint32_t ats_status_flags, uint8_t power_loss_trigger_enabled, uint8_t ats_enabled, float main_voltage1, float main_voltage2, float ups_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, ats_status_flags);
    _mav_put_float(buf, 8, main_voltage1);
    _mav_put_float(buf, 12, main_voltage2);
    _mav_put_float(buf, 16, ups_voltage);
    _mav_put_uint8_t(buf, 20, fc_armed);
    _mav_put_uint8_t(buf, 21, fc_flight_termination);
    _mav_put_uint8_t(buf, 22, power_loss_trigger_enabled);
    _mav_put_uint8_t(buf, 23, ats_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#else
    mavlink_aviant_ats_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ats_status_flags = ats_status_flags;
    packet.main_voltage1 = main_voltage1;
    packet.main_voltage2 = main_voltage2;
    packet.ups_voltage = ups_voltage;
    packet.fc_armed = fc_armed;
    packet.fc_flight_termination = fc_flight_termination;
    packet.power_loss_trigger_enabled = power_loss_trigger_enabled;
    packet.ats_enabled = ats_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_ATS_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#endif
}

/**
 * @brief Pack a aviant_ats_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param fc_armed  Is the flight controller armed?
 * @param fc_flight_termination  Is the flight controller in flight termination?
 * @param ats_status_flags  ATS Status flags
 * @param power_loss_trigger_enabled  Power loss trigger enabled
 * @param ats_enabled  ATS enabled
 * @param main_voltage1 [V] Main voltage measurement 1
 * @param main_voltage2 [V] Main voltage measurement 2
 * @param ups_voltage [V] UPS voltage measurement
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_ats_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t fc_armed,uint8_t fc_flight_termination,uint32_t ats_status_flags,uint8_t power_loss_trigger_enabled,uint8_t ats_enabled,float main_voltage1,float main_voltage2,float ups_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, ats_status_flags);
    _mav_put_float(buf, 8, main_voltage1);
    _mav_put_float(buf, 12, main_voltage2);
    _mav_put_float(buf, 16, ups_voltage);
    _mav_put_uint8_t(buf, 20, fc_armed);
    _mav_put_uint8_t(buf, 21, fc_flight_termination);
    _mav_put_uint8_t(buf, 22, power_loss_trigger_enabled);
    _mav_put_uint8_t(buf, 23, ats_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#else
    mavlink_aviant_ats_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ats_status_flags = ats_status_flags;
    packet.main_voltage1 = main_voltage1;
    packet.main_voltage2 = main_voltage2;
    packet.ups_voltage = ups_voltage;
    packet.fc_armed = fc_armed;
    packet.fc_flight_termination = fc_flight_termination;
    packet.power_loss_trigger_enabled = power_loss_trigger_enabled;
    packet.ats_enabled = ats_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_ATS_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
}

/**
 * @brief Encode a aviant_ats_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_ats_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_ats_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_ats_status_t* aviant_ats_status)
{
    return mavlink_msg_aviant_ats_status_pack(system_id, component_id, msg, aviant_ats_status->time_boot_ms, aviant_ats_status->fc_armed, aviant_ats_status->fc_flight_termination, aviant_ats_status->ats_status_flags, aviant_ats_status->power_loss_trigger_enabled, aviant_ats_status->ats_enabled, aviant_ats_status->main_voltage1, aviant_ats_status->main_voltage2, aviant_ats_status->ups_voltage);
}

/**
 * @brief Encode a aviant_ats_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_ats_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_ats_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_ats_status_t* aviant_ats_status)
{
    return mavlink_msg_aviant_ats_status_pack_chan(system_id, component_id, chan, msg, aviant_ats_status->time_boot_ms, aviant_ats_status->fc_armed, aviant_ats_status->fc_flight_termination, aviant_ats_status->ats_status_flags, aviant_ats_status->power_loss_trigger_enabled, aviant_ats_status->ats_enabled, aviant_ats_status->main_voltage1, aviant_ats_status->main_voltage2, aviant_ats_status->ups_voltage);
}

/**
 * @brief Encode a aviant_ats_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_ats_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_ats_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_ats_status_t* aviant_ats_status)
{
    return mavlink_msg_aviant_ats_status_pack_status(system_id, component_id, _status, msg,  aviant_ats_status->time_boot_ms, aviant_ats_status->fc_armed, aviant_ats_status->fc_flight_termination, aviant_ats_status->ats_status_flags, aviant_ats_status->power_loss_trigger_enabled, aviant_ats_status->ats_enabled, aviant_ats_status->main_voltage1, aviant_ats_status->main_voltage2, aviant_ats_status->ups_voltage);
}

/**
 * @brief Send a aviant_ats_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param fc_armed  Is the flight controller armed?
 * @param fc_flight_termination  Is the flight controller in flight termination?
 * @param ats_status_flags  ATS Status flags
 * @param power_loss_trigger_enabled  Power loss trigger enabled
 * @param ats_enabled  ATS enabled
 * @param main_voltage1 [V] Main voltage measurement 1
 * @param main_voltage2 [V] Main voltage measurement 2
 * @param ups_voltage [V] UPS voltage measurement
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_ats_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t fc_armed, uint8_t fc_flight_termination, uint32_t ats_status_flags, uint8_t power_loss_trigger_enabled, uint8_t ats_enabled, float main_voltage1, float main_voltage2, float ups_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, ats_status_flags);
    _mav_put_float(buf, 8, main_voltage1);
    _mav_put_float(buf, 12, main_voltage2);
    _mav_put_float(buf, 16, ups_voltage);
    _mav_put_uint8_t(buf, 20, fc_armed);
    _mav_put_uint8_t(buf, 21, fc_flight_termination);
    _mav_put_uint8_t(buf, 22, power_loss_trigger_enabled);
    _mav_put_uint8_t(buf, 23, ats_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS, buf, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#else
    mavlink_aviant_ats_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.ats_status_flags = ats_status_flags;
    packet.main_voltage1 = main_voltage1;
    packet.main_voltage2 = main_voltage2;
    packet.ups_voltage = ups_voltage;
    packet.fc_armed = fc_armed;
    packet.fc_flight_termination = fc_flight_termination;
    packet.power_loss_trigger_enabled = power_loss_trigger_enabled;
    packet.ats_enabled = ats_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#endif
}

/**
 * @brief Send a aviant_ats_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_ats_status_send_struct(mavlink_channel_t chan, const mavlink_aviant_ats_status_t* aviant_ats_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_ats_status_send(chan, aviant_ats_status->time_boot_ms, aviant_ats_status->fc_armed, aviant_ats_status->fc_flight_termination, aviant_ats_status->ats_status_flags, aviant_ats_status->power_loss_trigger_enabled, aviant_ats_status->ats_enabled, aviant_ats_status->main_voltage1, aviant_ats_status->main_voltage2, aviant_ats_status->ups_voltage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS, (const char *)aviant_ats_status, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_ats_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t fc_armed, uint8_t fc_flight_termination, uint32_t ats_status_flags, uint8_t power_loss_trigger_enabled, uint8_t ats_enabled, float main_voltage1, float main_voltage2, float ups_voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, ats_status_flags);
    _mav_put_float(buf, 8, main_voltage1);
    _mav_put_float(buf, 12, main_voltage2);
    _mav_put_float(buf, 16, ups_voltage);
    _mav_put_uint8_t(buf, 20, fc_armed);
    _mav_put_uint8_t(buf, 21, fc_flight_termination);
    _mav_put_uint8_t(buf, 22, power_loss_trigger_enabled);
    _mav_put_uint8_t(buf, 23, ats_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS, buf, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#else
    mavlink_aviant_ats_status_t *packet = (mavlink_aviant_ats_status_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->ats_status_flags = ats_status_flags;
    packet->main_voltage1 = main_voltage1;
    packet->main_voltage2 = main_voltage2;
    packet->ups_voltage = ups_voltage;
    packet->fc_armed = fc_armed;
    packet->fc_flight_termination = fc_flight_termination;
    packet->power_loss_trigger_enabled = power_loss_trigger_enabled;
    packet->ats_enabled = ats_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_ATS_STATUS, (const char *)packet, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_ATS_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from aviant_ats_status message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_aviant_ats_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field fc_armed from aviant_ats_status message
 *
 * @return  Is the flight controller armed?
 */
static inline uint8_t mavlink_msg_aviant_ats_status_get_fc_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field fc_flight_termination from aviant_ats_status message
 *
 * @return  Is the flight controller in flight termination?
 */
static inline uint8_t mavlink_msg_aviant_ats_status_get_fc_flight_termination(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field ats_status_flags from aviant_ats_status message
 *
 * @return  ATS Status flags
 */
static inline uint32_t mavlink_msg_aviant_ats_status_get_ats_status_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field power_loss_trigger_enabled from aviant_ats_status message
 *
 * @return  Power loss trigger enabled
 */
static inline uint8_t mavlink_msg_aviant_ats_status_get_power_loss_trigger_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field ats_enabled from aviant_ats_status message
 *
 * @return  ATS enabled
 */
static inline uint8_t mavlink_msg_aviant_ats_status_get_ats_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  23);
}

/**
 * @brief Get field main_voltage1 from aviant_ats_status message
 *
 * @return [V] Main voltage measurement 1
 */
static inline float mavlink_msg_aviant_ats_status_get_main_voltage1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field main_voltage2 from aviant_ats_status message
 *
 * @return [V] Main voltage measurement 2
 */
static inline float mavlink_msg_aviant_ats_status_get_main_voltage2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field ups_voltage from aviant_ats_status message
 *
 * @return [V] UPS voltage measurement
 */
static inline float mavlink_msg_aviant_ats_status_get_ups_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a aviant_ats_status message into a struct
 *
 * @param msg The message to decode
 * @param aviant_ats_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_ats_status_decode(const mavlink_message_t* msg, mavlink_aviant_ats_status_t* aviant_ats_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_ats_status->time_boot_ms = mavlink_msg_aviant_ats_status_get_time_boot_ms(msg);
    aviant_ats_status->ats_status_flags = mavlink_msg_aviant_ats_status_get_ats_status_flags(msg);
    aviant_ats_status->main_voltage1 = mavlink_msg_aviant_ats_status_get_main_voltage1(msg);
    aviant_ats_status->main_voltage2 = mavlink_msg_aviant_ats_status_get_main_voltage2(msg);
    aviant_ats_status->ups_voltage = mavlink_msg_aviant_ats_status_get_ups_voltage(msg);
    aviant_ats_status->fc_armed = mavlink_msg_aviant_ats_status_get_fc_armed(msg);
    aviant_ats_status->fc_flight_termination = mavlink_msg_aviant_ats_status_get_fc_flight_termination(msg);
    aviant_ats_status->power_loss_trigger_enabled = mavlink_msg_aviant_ats_status_get_power_loss_trigger_enabled(msg);
    aviant_ats_status->ats_enabled = mavlink_msg_aviant_ats_status_get_ats_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN;
        memset(aviant_ats_status, 0, MAVLINK_MSG_ID_AVIANT_ATS_STATUS_LEN);
    memcpy(aviant_ats_status, _MAV_PAYLOAD(msg), len);
#endif
}
