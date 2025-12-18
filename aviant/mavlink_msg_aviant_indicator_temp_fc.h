#pragma once
// MESSAGE AVIANT_INDICATOR_TEMP_FC PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC 59006


typedef struct __mavlink_aviant_indicator_temp_fc_t {
 uint8_t battery_internal_state; /*<  Battery internal temperature status*/
 int8_t battery_internal; /*< [degC] Battery internal temperature*/
 uint8_t airspeed_internal_state; /*<  Airspeed sensor internal temperature status*/
 int8_t airspeed_internal; /*< [degC] Airspeed sensor internal temperature*/
 uint8_t accel_internal_state; /*<  Accelerometer internal temperature status*/
 int8_t accel_internal; /*< [degC] Accelerometer internal temperature*/
 uint8_t baro_internal_state; /*<  Barometer internal temperature status*/
 int8_t baro_internal; /*< [degC] Barometer internal temperature*/
} mavlink_aviant_indicator_temp_fc_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN 8
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN 8
#define MAVLINK_MSG_ID_59006_LEN 8
#define MAVLINK_MSG_ID_59006_MIN_LEN 8

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC 244
#define MAVLINK_MSG_ID_59006_CRC 244



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_TEMP_FC { \
    59006, \
    "AVIANT_INDICATOR_TEMP_FC", \
    8, \
    {  { "battery_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_indicator_temp_fc_t, battery_internal_state) }, \
         { "battery_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_aviant_indicator_temp_fc_t, battery_internal) }, \
         { "airspeed_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_aviant_indicator_temp_fc_t, airspeed_internal_state) }, \
         { "airspeed_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_aviant_indicator_temp_fc_t, airspeed_internal) }, \
         { "accel_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aviant_indicator_temp_fc_t, accel_internal_state) }, \
         { "accel_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_aviant_indicator_temp_fc_t, accel_internal) }, \
         { "baro_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_aviant_indicator_temp_fc_t, baro_internal_state) }, \
         { "baro_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_aviant_indicator_temp_fc_t, baro_internal) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_TEMP_FC { \
    "AVIANT_INDICATOR_TEMP_FC", \
    8, \
    {  { "battery_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_indicator_temp_fc_t, battery_internal_state) }, \
         { "battery_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_aviant_indicator_temp_fc_t, battery_internal) }, \
         { "airspeed_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_aviant_indicator_temp_fc_t, airspeed_internal_state) }, \
         { "airspeed_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_aviant_indicator_temp_fc_t, airspeed_internal) }, \
         { "accel_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aviant_indicator_temp_fc_t, accel_internal_state) }, \
         { "accel_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_aviant_indicator_temp_fc_t, accel_internal) }, \
         { "baro_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_aviant_indicator_temp_fc_t, baro_internal_state) }, \
         { "baro_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_aviant_indicator_temp_fc_t, baro_internal) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_temp_fc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_internal_state  Battery internal temperature status
 * @param battery_internal [degC] Battery internal temperature
 * @param airspeed_internal_state  Airspeed sensor internal temperature status
 * @param airspeed_internal [degC] Airspeed sensor internal temperature
 * @param accel_internal_state  Accelerometer internal temperature status
 * @param accel_internal [degC] Accelerometer internal temperature
 * @param baro_internal_state  Barometer internal temperature status
 * @param baro_internal [degC] Barometer internal temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t battery_internal_state, int8_t battery_internal, uint8_t airspeed_internal_state, int8_t airspeed_internal, uint8_t accel_internal_state, int8_t accel_internal, uint8_t baro_internal_state, int8_t baro_internal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN];
    _mav_put_uint8_t(buf, 0, battery_internal_state);
    _mav_put_int8_t(buf, 1, battery_internal);
    _mav_put_uint8_t(buf, 2, airspeed_internal_state);
    _mav_put_int8_t(buf, 3, airspeed_internal);
    _mav_put_uint8_t(buf, 4, accel_internal_state);
    _mav_put_int8_t(buf, 5, accel_internal);
    _mav_put_uint8_t(buf, 6, baro_internal_state);
    _mav_put_int8_t(buf, 7, baro_internal);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#else
    mavlink_aviant_indicator_temp_fc_t packet;
    packet.battery_internal_state = battery_internal_state;
    packet.battery_internal = battery_internal;
    packet.airspeed_internal_state = airspeed_internal_state;
    packet.airspeed_internal = airspeed_internal;
    packet.accel_internal_state = accel_internal_state;
    packet.accel_internal = accel_internal;
    packet.baro_internal_state = baro_internal_state;
    packet.baro_internal = baro_internal;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
}

/**
 * @brief Pack a aviant_indicator_temp_fc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_internal_state  Battery internal temperature status
 * @param battery_internal [degC] Battery internal temperature
 * @param airspeed_internal_state  Airspeed sensor internal temperature status
 * @param airspeed_internal [degC] Airspeed sensor internal temperature
 * @param accel_internal_state  Accelerometer internal temperature status
 * @param accel_internal [degC] Accelerometer internal temperature
 * @param baro_internal_state  Barometer internal temperature status
 * @param baro_internal [degC] Barometer internal temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t battery_internal_state, int8_t battery_internal, uint8_t airspeed_internal_state, int8_t airspeed_internal, uint8_t accel_internal_state, int8_t accel_internal, uint8_t baro_internal_state, int8_t baro_internal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN];
    _mav_put_uint8_t(buf, 0, battery_internal_state);
    _mav_put_int8_t(buf, 1, battery_internal);
    _mav_put_uint8_t(buf, 2, airspeed_internal_state);
    _mav_put_int8_t(buf, 3, airspeed_internal);
    _mav_put_uint8_t(buf, 4, accel_internal_state);
    _mav_put_int8_t(buf, 5, accel_internal);
    _mav_put_uint8_t(buf, 6, baro_internal_state);
    _mav_put_int8_t(buf, 7, baro_internal);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#else
    mavlink_aviant_indicator_temp_fc_t packet;
    packet.battery_internal_state = battery_internal_state;
    packet.battery_internal = battery_internal;
    packet.airspeed_internal_state = airspeed_internal_state;
    packet.airspeed_internal = airspeed_internal;
    packet.accel_internal_state = accel_internal_state;
    packet.accel_internal = accel_internal;
    packet.baro_internal_state = baro_internal_state;
    packet.baro_internal = baro_internal;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_temp_fc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_internal_state  Battery internal temperature status
 * @param battery_internal [degC] Battery internal temperature
 * @param airspeed_internal_state  Airspeed sensor internal temperature status
 * @param airspeed_internal [degC] Airspeed sensor internal temperature
 * @param accel_internal_state  Accelerometer internal temperature status
 * @param accel_internal [degC] Accelerometer internal temperature
 * @param baro_internal_state  Barometer internal temperature status
 * @param baro_internal [degC] Barometer internal temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t battery_internal_state,int8_t battery_internal,uint8_t airspeed_internal_state,int8_t airspeed_internal,uint8_t accel_internal_state,int8_t accel_internal,uint8_t baro_internal_state,int8_t baro_internal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN];
    _mav_put_uint8_t(buf, 0, battery_internal_state);
    _mav_put_int8_t(buf, 1, battery_internal);
    _mav_put_uint8_t(buf, 2, airspeed_internal_state);
    _mav_put_int8_t(buf, 3, airspeed_internal);
    _mav_put_uint8_t(buf, 4, accel_internal_state);
    _mav_put_int8_t(buf, 5, accel_internal);
    _mav_put_uint8_t(buf, 6, baro_internal_state);
    _mav_put_int8_t(buf, 7, baro_internal);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#else
    mavlink_aviant_indicator_temp_fc_t packet;
    packet.battery_internal_state = battery_internal_state;
    packet.battery_internal = battery_internal;
    packet.airspeed_internal_state = airspeed_internal_state;
    packet.airspeed_internal = airspeed_internal;
    packet.accel_internal_state = accel_internal_state;
    packet.accel_internal = accel_internal;
    packet.baro_internal_state = baro_internal_state;
    packet.baro_internal = baro_internal;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
}

/**
 * @brief Encode a aviant_indicator_temp_fc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_fc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_fc_t* aviant_indicator_temp_fc)
{
    return mavlink_msg_aviant_indicator_temp_fc_pack(system_id, component_id, msg, aviant_indicator_temp_fc->battery_internal_state, aviant_indicator_temp_fc->battery_internal, aviant_indicator_temp_fc->airspeed_internal_state, aviant_indicator_temp_fc->airspeed_internal, aviant_indicator_temp_fc->accel_internal_state, aviant_indicator_temp_fc->accel_internal, aviant_indicator_temp_fc->baro_internal_state, aviant_indicator_temp_fc->baro_internal);
}

/**
 * @brief Encode a aviant_indicator_temp_fc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_fc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_fc_t* aviant_indicator_temp_fc)
{
    return mavlink_msg_aviant_indicator_temp_fc_pack_chan(system_id, component_id, chan, msg, aviant_indicator_temp_fc->battery_internal_state, aviant_indicator_temp_fc->battery_internal, aviant_indicator_temp_fc->airspeed_internal_state, aviant_indicator_temp_fc->airspeed_internal, aviant_indicator_temp_fc->accel_internal_state, aviant_indicator_temp_fc->accel_internal, aviant_indicator_temp_fc->baro_internal_state, aviant_indicator_temp_fc->baro_internal);
}

/**
 * @brief Encode a aviant_indicator_temp_fc struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_fc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_fc_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_fc_t* aviant_indicator_temp_fc)
{
    return mavlink_msg_aviant_indicator_temp_fc_pack_status(system_id, component_id, _status, msg,  aviant_indicator_temp_fc->battery_internal_state, aviant_indicator_temp_fc->battery_internal, aviant_indicator_temp_fc->airspeed_internal_state, aviant_indicator_temp_fc->airspeed_internal, aviant_indicator_temp_fc->accel_internal_state, aviant_indicator_temp_fc->accel_internal, aviant_indicator_temp_fc->baro_internal_state, aviant_indicator_temp_fc->baro_internal);
}

/**
 * @brief Send a aviant_indicator_temp_fc message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_internal_state  Battery internal temperature status
 * @param battery_internal [degC] Battery internal temperature
 * @param airspeed_internal_state  Airspeed sensor internal temperature status
 * @param airspeed_internal [degC] Airspeed sensor internal temperature
 * @param accel_internal_state  Accelerometer internal temperature status
 * @param accel_internal [degC] Accelerometer internal temperature
 * @param baro_internal_state  Barometer internal temperature status
 * @param baro_internal [degC] Barometer internal temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_temp_fc_send(mavlink_channel_t chan, uint8_t battery_internal_state, int8_t battery_internal, uint8_t airspeed_internal_state, int8_t airspeed_internal, uint8_t accel_internal_state, int8_t accel_internal, uint8_t baro_internal_state, int8_t baro_internal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN];
    _mav_put_uint8_t(buf, 0, battery_internal_state);
    _mav_put_int8_t(buf, 1, battery_internal);
    _mav_put_uint8_t(buf, 2, airspeed_internal_state);
    _mav_put_int8_t(buf, 3, airspeed_internal);
    _mav_put_uint8_t(buf, 4, accel_internal_state);
    _mav_put_int8_t(buf, 5, accel_internal);
    _mav_put_uint8_t(buf, 6, baro_internal_state);
    _mav_put_int8_t(buf, 7, baro_internal);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#else
    mavlink_aviant_indicator_temp_fc_t packet;
    packet.battery_internal_state = battery_internal_state;
    packet.battery_internal = battery_internal;
    packet.airspeed_internal_state = airspeed_internal_state;
    packet.airspeed_internal = airspeed_internal;
    packet.accel_internal_state = accel_internal_state;
    packet.accel_internal = accel_internal;
    packet.baro_internal_state = baro_internal_state;
    packet.baro_internal = baro_internal;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_temp_fc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_temp_fc_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_temp_fc_t* aviant_indicator_temp_fc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_temp_fc_send(chan, aviant_indicator_temp_fc->battery_internal_state, aviant_indicator_temp_fc->battery_internal, aviant_indicator_temp_fc->airspeed_internal_state, aviant_indicator_temp_fc->airspeed_internal, aviant_indicator_temp_fc->accel_internal_state, aviant_indicator_temp_fc->accel_internal, aviant_indicator_temp_fc->baro_internal_state, aviant_indicator_temp_fc->baro_internal);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC, (const char *)aviant_indicator_temp_fc, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_temp_fc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t battery_internal_state, int8_t battery_internal, uint8_t airspeed_internal_state, int8_t airspeed_internal, uint8_t accel_internal_state, int8_t accel_internal, uint8_t baro_internal_state, int8_t baro_internal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, battery_internal_state);
    _mav_put_int8_t(buf, 1, battery_internal);
    _mav_put_uint8_t(buf, 2, airspeed_internal_state);
    _mav_put_int8_t(buf, 3, airspeed_internal);
    _mav_put_uint8_t(buf, 4, accel_internal_state);
    _mav_put_int8_t(buf, 5, accel_internal);
    _mav_put_uint8_t(buf, 6, baro_internal_state);
    _mav_put_int8_t(buf, 7, baro_internal);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#else
    mavlink_aviant_indicator_temp_fc_t *packet = (mavlink_aviant_indicator_temp_fc_t *)msgbuf;
    packet->battery_internal_state = battery_internal_state;
    packet->battery_internal = battery_internal;
    packet->airspeed_internal_state = airspeed_internal_state;
    packet->airspeed_internal = airspeed_internal;
    packet->accel_internal_state = accel_internal_state;
    packet->accel_internal = accel_internal;
    packet->baro_internal_state = baro_internal_state;
    packet->baro_internal = baro_internal;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_TEMP_FC UNPACKING


/**
 * @brief Get field battery_internal_state from aviant_indicator_temp_fc message
 *
 * @return  Battery internal temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_fc_get_battery_internal_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field battery_internal from aviant_indicator_temp_fc message
 *
 * @return [degC] Battery internal temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_fc_get_battery_internal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field airspeed_internal_state from aviant_indicator_temp_fc message
 *
 * @return  Airspeed sensor internal temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_fc_get_airspeed_internal_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field airspeed_internal from aviant_indicator_temp_fc message
 *
 * @return [degC] Airspeed sensor internal temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_fc_get_airspeed_internal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field accel_internal_state from aviant_indicator_temp_fc message
 *
 * @return  Accelerometer internal temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_fc_get_accel_internal_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field accel_internal from aviant_indicator_temp_fc message
 *
 * @return [degC] Accelerometer internal temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_fc_get_accel_internal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Get field baro_internal_state from aviant_indicator_temp_fc message
 *
 * @return  Barometer internal temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_fc_get_baro_internal_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field baro_internal from aviant_indicator_temp_fc message
 *
 * @return [degC] Barometer internal temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_fc_get_baro_internal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Decode a aviant_indicator_temp_fc message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_temp_fc C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_temp_fc_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_temp_fc_t* aviant_indicator_temp_fc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_indicator_temp_fc->battery_internal_state = mavlink_msg_aviant_indicator_temp_fc_get_battery_internal_state(msg);
    aviant_indicator_temp_fc->battery_internal = mavlink_msg_aviant_indicator_temp_fc_get_battery_internal(msg);
    aviant_indicator_temp_fc->airspeed_internal_state = mavlink_msg_aviant_indicator_temp_fc_get_airspeed_internal_state(msg);
    aviant_indicator_temp_fc->airspeed_internal = mavlink_msg_aviant_indicator_temp_fc_get_airspeed_internal(msg);
    aviant_indicator_temp_fc->accel_internal_state = mavlink_msg_aviant_indicator_temp_fc_get_accel_internal_state(msg);
    aviant_indicator_temp_fc->accel_internal = mavlink_msg_aviant_indicator_temp_fc_get_accel_internal(msg);
    aviant_indicator_temp_fc->baro_internal_state = mavlink_msg_aviant_indicator_temp_fc_get_baro_internal_state(msg);
    aviant_indicator_temp_fc->baro_internal = mavlink_msg_aviant_indicator_temp_fc_get_baro_internal(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN;
        memset(aviant_indicator_temp_fc, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_FC_LEN);
    memcpy(aviant_indicator_temp_fc, _MAV_PAYLOAD(msg), len);
#endif
}
